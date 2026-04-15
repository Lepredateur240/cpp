CC          := c++
SHELL       := /bin/bash
<<<<<<< HEAD
NAME        := polymorphism
=======
NAME        := sound
NAME_WRONG	:= sound_wrong
>>>>>>> 5da620975b60ed95d7ff8050b13dc10f5b400b3b

# Directories
OBJ_DIR       := obj

# Files
SRCS := main.cpp \
<<<<<<< HEAD
		

# Object mapping
OBJS       := $(SRCS:%.cpp=$(OBJ_DIR)/%.o)
=======
		Cat.Classe.cpp \
		Dog.Classe.cpp \
		Animal.Classe.cpp

SRCS_WRONG :=	mainWrong.cpp \
				WrongAnimal.Classe.cpp \
				WrongCat.Classe.cpp

# Object mapping
OBJS       := $(SRCS:%.cpp=$(OBJ_DIR)/%.o)
OBJS_WRONG  := $(SRCS_WRONG:%.cpp=$(OBJ_DIR)/%.o)
>>>>>>> 5da620975b60ed95d7ff8050b13dc10f5b400b3b

# Flags
CFLAGS     := -Wall -Wextra -Werror -std=c++98

# Main Rule
<<<<<<< HEAD
all: $(NAME)
=======
all: $(NAME) $(NAME_WRONG)
>>>>>>> 5da620975b60ed95d7ff8050b13dc10f5b400b3b

# Linking Mandatory
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

<<<<<<< HEAD
=======
$(NAME_WRONG): $(OBJS_WRONG)
	$(CC) $(CFLAGS) $(OBJS_WRONG) -o $(NAME_WRONG)

>>>>>>> 5da620975b60ed95d7ff8050b13dc10f5b400b3b
# Compilation Rule Mandatory
$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rules
clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)
<<<<<<< HEAD
=======
	rm -f $(NAME_WRONG)
>>>>>>> 5da620975b60ed95d7ff8050b13dc10f5b400b3b

re: fclean all

.PHONY: all clean fclean re