# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/19 15:20:11 by kpourcel          #+#    #+#              #
#    Updated: 2025/01/21 14:24:26 by kpourcel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := brain
CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98 -Iinclude
RM := rm -rf

SRC_DIR := src
SRCS := $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Linking $(NAME)..."
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Compilation finished!"

$(SRC_DIR)/%.o: $(SRC_DIR)/%.cpp
	@echo "Compiling $<..."
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning object files..."
	$(RM) $(OBJS)

fclean: clean
	@echo "Removing executable..."
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re