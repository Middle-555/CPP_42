# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/18 13:28:14 by kpourcel          #+#    #+#              #
#    Updated: 2025/04/21 15:38:42 by kpourcel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


MAKEFLAGS += --no-print-directory

NAME        =   PmergeMe
CXX         =   c++
CXXFLAGS    =   -Wall -Wextra -Werror -std=c++98

SRC_DIR     =   src
INC_DIR     =   include
OBJ_DIR     =   obj

SRCS        =   $(wildcard $(SRC_DIR)/*.cpp)
OBJS        =   $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRCS))
INCLUDES    =   -I$(INC_DIR)

HEADER      =   "📦 Compilation du projet $(NAME)"
LINE        =   "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ_DIR) $(OBJS)
	@echo ""
	@echo $(LINE)
	@echo $(HEADER)
	@echo $(LINE)
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
	@$(MAKE) fclean
	@$(MAKE) all

run: all
	@echo "🚀 Lancement de $(NAME)..."
	@./$(NAME)

valgrind: all
	@echo "🧪 Analyse mémoire avec Valgrind..."
	@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME)

leaks: all
	@echo "🧠 Vérification des fuites mémoire (macOS)..."
	@leaks --atExit -- ./$(NAME)

help:
	@echo "🛠️  Liste des commandes disponibles :"
	@echo "  make         : Compile le projet"
	@echo "  make run     : Compile et exécute le programme"
	@echo "  make clean   : Supprime les fichiers objets"
	@echo "  make fclean  : Supprime les objets + binaire"
	@echo "  make re      : Recompile tout"
	@echo "  make leaks   : Vérifie les fuites mémoire (macOS)"
	@echo "  make valgrind: Vérifie les fuites mémoire (Linux)"
	@echo "  make help    : Affiche cette aide"

.PHONY: all clean fclean re run help leaks valgrind
