NAME = BraiiiiiiinnnzzzZ
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -MMD -g3 -std=c++98 
OBJ_PATH = .obj/
SRC = main.cpp
OBJ_NAME = $(SRC:.cpp=.o)

OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

.DEFAULT_GOAL := all

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

$(OBJ_PATH)%.o: %.cpp
	@mkdir -p $(@D)
	@$(CXX) $(CXXFLAGS) -o $@ -c $<

-include $(OBJ:%.o=%.d)

all: $(NAME)

clean:
	rm -rf .obj

fclean: clean
	rm -rf $(NAME)

re:
	@$(MAKE) -s fclean all

.PHONY: all clean fclean re display_ascii_art
