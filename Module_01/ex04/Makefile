# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/21 22:02:13 by kpourcel          #+#    #+#              #
#    Updated: 2025/01/23 16:18:05 by kpourcel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CXX      = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I$(INCDIR)
NAME     = replace
SRCDIR   = src
INCDIR   = include
SRCS     = $(SRCDIR)/main.cpp $(SRCDIR)/Sed.cpp
OBJS     = $(SRCS:.cpp=.o)

# Règle principale
all: $(NAME)

# Compilation de l'exécutable
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

# Compilation des fichiers .cpp en .o
$(SRCDIR)/%.o: $(SRCDIR)/%.cpp $(INCDIR)/Sed.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	rm -f $(OBJS)

# Nettoyage complet + suppression de l'exécutable
fclean: clean
	rm -f $(NAME)

# Recompile proprement
re: fclean all

# Évite les erreurs si les fichiers/règles n'existent pas
.PHONY: all clean fclean re