CC          := c++
SHELL       := /bin/bash
NAME        := claptrap

# Directories
OBJ_DIR       := obj

# Files
SRCS := main.cpp \
		ClapTrap.Classe.cpp \

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