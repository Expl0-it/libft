# -*- Makefile -*-

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
INCLUD = includes/libft.h
SRC_DIR = ./src
OBJ_DIR = ./obj

SOURCES = $(wildcard $(SRC_DIR)/*.c)
OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.obj, $(SOURCES))

all: $(NAME)

$(NAME): $(OBJECTS)
	$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c:
	@$(CC) -o $(NAME) $(CFLAGS) $(OBJECTS) -I $(INCLUD)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
	