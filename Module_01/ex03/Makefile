# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/21 14:52:42 by kpourcel          #+#    #+#              #
#    Updated: 2025/01/21 17:00:42 by kpourcel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME = violence
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinclude
SRCS = src/main.cpp src/Weapon.cpp src/HumanA.cpp src/HumanB.cpp
OBJS = $(SRCS:.cpp=.o)

# Règles
all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "Compilation terminée : $(NAME) créé."

src/%.o: src/%.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "Compilation de $< terminée."

clean:
	@rm -f $(OBJS)
	@echo "Fichiers objets supprimés."

fclean: clean
	@rm -f $(NAME)
	@echo "Exécutable $(NAME) supprimé."

re: fclean all

run: all
	@./$(NAME)

.PHONY: all clean fclean re run
