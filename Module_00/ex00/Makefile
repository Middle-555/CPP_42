# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/30 15:07:13 by kpourcel          #+#    #+#              #
#    Updated: 2025/03/25 16:19:01 by kpourcel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	megaphone

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
