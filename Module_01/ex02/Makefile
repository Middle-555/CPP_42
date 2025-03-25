# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/19 15:20:11 by kpourcel          #+#    #+#              #
#    Updated: 2025/03/25 16:22:53 by kpourcel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Brain

CXX		=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC_DIR		=	src
INC_DIR		=	include

SRCS		=	$(wildcard $(SRC_DIR)/*.cpp)
OBJS		=	$(SRCS:.cpp=.o)

INCLUDES	=	-I$(INC_DIR)

# ----------------------------------

all: $(NAME)

$(NAME): $(OBJS)
	@echo "🔧 Linking executable '$(NAME)'..."
	@$(CXX) $(CXXFLAGS) $(INCLUDES) -o $@ $^

%.o: %.cpp
	@echo "🛠️  Compilation de $<"
	@$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@echo "🧹 Suppression des fichiers objets..."
	@rm -f $(OBJS)

fclean: clean
	@echo "🧨 Suppression de l’exécutable '$(NAME)'..."
	@rm -f $(NAME)

re:
	@echo "🔁 Recompilation complète..."
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean fclean re
