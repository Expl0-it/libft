# -*- Makefile -*-

NAME = libft
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
INCLUD = includes/libft.h

SOURCES = src/*.c

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@cc -o $(NAME) $(CFLAGS) $(OBJECTS) -I $(INCLUD)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
	