# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/04 16:54:53 by kpourcel          #+#    #+#              #
#    Updated: 2025/03/26 12:19:43 by kpourcel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Brain

CXX		=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC_DIR		=	src
INC_DIR		=	include
OBJ_DIR		=	obj

SRCS		=	$(wildcard $(SRC_DIR)/*.cpp)
OBJS		=	$(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRCS))

INCLUDES	=	-I$(INC_DIR)

HEADER		=	"📦 Compilation du projet $(NAME)"
LINE		=	"━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"

# ------------------------------------------------------------------

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ_DIR) $(OBJS)
	@echo ""
	@echo "$(LINE)"
	@echo "$(HEADER)"
	@echo "$(LINE)"
	@$(CXX) $(CXXFLAGS) $(INCLUDES) -o $@ $(OBJS)
	@echo "✅ Compilation terminée."

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@echo "🛠️  Compilation de $<"
	@$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@echo "🧹 Suppression des fichiers objets et du dossier obj/..."
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "🧨 Suppression de l’exécutable '$(NAME)'..."
	@rm -f $(NAME)

re:
	@echo "🔁 Recompilation complète..."
	@$(MAKE) fclean
	@$(MAKE) all

run: all
	@echo "🚀 Lancement de $(NAME)..."
	@./$(NAME)

valgrind: all
	@echo "🧠 Lancement avec valgrind..."
	@valgrind --leak-check=full ./$(NAME)

help:
	@echo "🛠️  Liste des commandes disponibles :"
	@echo "  make         : Compile le projet"
	@echo "  make run     : Compile et exécute le programme"
	@echo "  make clean   : Supprime les fichiers objets"
	@echo "  make fclean  : Supprime les fichiers objets + exécutable"
	@echo "  make re      : Recompile tout"
	@echo "  make valgrind: Lance le programme avec valgrind"
	@echo "  make help    : Affiche cette aide"

.PHONY: all clean fclean re run valgrind help