NAME = phonebook
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -MMD -g3 -std=c++98 
SRC_PATH = src/
OBJ_PATH = .obj/
SRC_NAME = main.cpp \
		   PhoneBook.cpp \
		   Contact.cpp
OBJ_NAME = $(SRC_NAME:.cpp=.o)

OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))
SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))

.DEFAULT_GOAL := all

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp
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
