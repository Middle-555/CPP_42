# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/03 18:27:54 by kpourcel          #+#    #+#              #
#    Updated: 2025/02/03 18:28:16 by kpourcel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = ScavTrap

# Compilateur + flags
CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98 -I include

# Sources & Objets
SRCS        = src/main.cpp src/ClapTrap.cpp src/ScavTrap.cpp 
OBJS        = $(SRCS:.cpp=.o)

# Règle par défaut
all: $(NAME)

# Edition de liens (création de l’exécutable)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

# Compilation : chaque .o dépend de son .cpp
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Nettoyage des .o
clean:
	rm -f $(OBJS)

# Nettoyage + exécutable
fclean: clean
	rm -f $(NAME)

# Rebuild complet
re: fclean all

# Pour éviter les conflits avec des fichiers nommés "clean", "fclean", etc.
.PHONY: all clean fclean re
