/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:54:17 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/04 14:34:33 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"

Serializer::Serializer(){}

Serializer::~Serializer(){}

Serializer::Serializer(Serializer const &other){*this = other;}

Serializer &Serializer::operator=(Serializer const &other)
{
	(void)other;
	return *this;
}

/**
 * @brief Convertit un pointeur vers une structure Data en une valeur entière brute.
 *
 * Cette fonction utilise reinterpret_cast pour transformer l'adresse mémoire du pointeur `ptr`
 * en un entier non signé de type `uintptr_t`. Cela permet de manipuler l'adresse comme une donnée,
 * par exemple pour la stocker temporairement ou la transmettre sans manipuler l'objet lui-même.
 *
 * Attention : ce cast ne modifie pas le contenu de l'objet pointé, il réinterprète juste
 * les bits de l'adresse comme une valeur entière. Cela ne doit être utilisé que dans un
 * contexte contrôlé, où l'on sait que l'adresse sera utilisée immédiatement dans le même programme.
 *
 * @param ptr Un pointeur vers une instance de la structure Data
 * @return uintptr_t La représentation entière de l'adresse du pointeur
 */

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

/**
 * @brief Reconvertit une valeur entière brute en pointeur vers une structure Data.
 *
 * Cette fonction fait l'opération inverse de serialize() : elle prend une adresse mémoire
 * représentée sous forme entière (`uintptr_t`), et la retransforme en un pointeur vers
 * une structure Data.
 *
 * Ce cast ne vérifie pas la validité de l'adresse ! Il suppose que le `raw` provient
 * bien d'un serialize() précédent, et que l'objet pointé existe toujours à cette adresse.
 * Si ce n'est pas le cas, le comportement est indéfini.
 *
 * @param raw Une valeur entière représentant une adresse mémoire
 * @return Data* Un pointeur vers l'objet Data initial
 */

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}
