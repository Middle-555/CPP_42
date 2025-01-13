# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/30 15:18:22 by kpourcel          #+#    #+#              #
#    Updated: 2025/01/13 21:25:16 by kpourcel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I./include

# Répertoires
SRCDIR = ./src
INCDIR = ./include
OBJDIR = ./obj

# Fichiers
SRC = $(SRCDIR)/main.cpp $(SRCDIR)/PhoneBook.cpp $(SRCDIR)/Contact.cpp
OBJ = $(SRC:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
NAME = phonebook

# Règles
all: $(NAME)

# Création de l'exécutable
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

# Compilation des fichiers objets
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	@rm -rf $(OBJDIR)

# Nettoyage complet
fclean: clean
	@rm -f $(NAME)

# Recompiler entièrement
re: fclean all

# Ignorer les fichiers spécifiques
.PHONY: all clean fclean re
