CC          := c++
SHELL       := /bin/bash
<<<<<<< HEAD
NAME        := polymorphism
=======
NAME        := abstrac
>>>>>>> 5da620975b60ed95d7ff8050b13dc10f5b400b3b

# Directories
OBJ_DIR       := obj

# Files
SRCS := main.cpp \
<<<<<<< HEAD
		ClapTrap.Classe.cpp \
=======
		Cat.Classe.cpp \
		Dog.Classe.cpp \
		AAnimal.Classe.cpp \
		Brain.Classe.cpp
>>>>>>> 5da620975b60ed95d7ff8050b13dc10f5b400b3b

# Object mapping
OBJS       := $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

# Flags
CFLAGS     := -Wall -Wextra -Werror -std=c++98

# Main Rule
all: $(NAME)

# Linking Mandatory
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Compilation Rule Mandatory
$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rules
clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re