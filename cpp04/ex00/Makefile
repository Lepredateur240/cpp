CC          := c++
SHELL       := /bin/bash
NAME        := sound
NAME_WRONG	:= sound_wrong

# Directories
OBJ_DIR       := obj

# Files
SRCS := main.cpp \
		Cat.Classe.cpp \
		Dog.Classe.cpp \
		Animal.Classe.cpp

SRCS_WRONG :=	mainWrong.cpp \
				WrongAnimal.Classe.cpp \
				WrongCat.Classe.cpp

# Object mapping
OBJS       := $(SRCS:%.cpp=$(OBJ_DIR)/%.o)
OBJS_WRONG  := $(SRCS_WRONG:%.cpp=$(OBJ_DIR)/%.o)

# Flags
CFLAGS     := -Wall -Wextra -Werror -std=c++98

# Main Rule
all: $(NAME) $(NAME_WRONG)

# Linking Mandatory
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(NAME_WRONG): $(OBJS_WRONG)
	$(CC) $(CFLAGS) $(OBJS_WRONG) -o $(NAME_WRONG)

# Compilation Rule Mandatory
$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rules
clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME_WRONG)

re: fclean all

.PHONY: all clean fclean re