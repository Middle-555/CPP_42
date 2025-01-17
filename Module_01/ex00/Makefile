# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/17 13:58:16 by kpourcel          #+#    #+#              #
#    Updated: 2025/01/17 14:45:36 by kpourcel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom de l'exécutable
NAME = zombie

# Compilateur
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Dossiers
SRC_DIR = src
INC_DIR = include
OBJ_DIR = obj

# Fichiers sources
SRCS = $(SRC_DIR)/main.cpp \
       $(SRC_DIR)/Zombie.cpp \
       $(SRC_DIR)/newZombie.cpp \
       $(SRC_DIR)/randomChump.cpp

# Génération des fichiers objets
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

# Commande de compilation
$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "✅ Compilation terminée ! Exécutable : $(NAME)"

# Compilation des fichiers objets
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $< -o $@
	@echo "🛠️  Compilation de $<"

# Création du dossier obj si nécessaire
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# Nettoyage des fichiers objets et de l'exécutable
clean:
	@rm -rf $(OBJ_DIR)
	@echo "🧹 Fichiers objets supprimés."

fclean: clean
	@rm -f $(NAME)
	@echo "🗑️  Exécutable supprimé."

# Recompilation complète
re: fclean $(NAME)

# Empêche Make d'utiliser un fichier appelé "clean" comme cible par défaut
.PHONY: clean fclean re
