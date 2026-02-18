CC          := c++
SHELL       := /bin/bash
NAME        := megaphone

# Directories
OBJ_DIR       := obj

# Files
SRCS := megaphone.cpp

# Object mapping
OBJS       := $(SRCS:%.c=$(OBJ_DIR)/%.o)

# Flags
CFLAGS         := -Wall -Wextra -Werror -std=c++98

# Main Rule
all: $(NAME)

# Linking Mandatory
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -std=c++98 -o $(NAME)

# Compilation Rule Mandatory
$(OBJ_DIR)/%.o: /%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rules
clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re