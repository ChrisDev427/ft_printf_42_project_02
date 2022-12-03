# Makefile ft_printf

NAME = libftprintf.a
CC = gcc 
CFLAGS = -Wall -Wextra -Werror -I

SRCS = ft_printf.c ft_putstr.c ft_putchar.c ft_flag_linker.c ft_print_di.c ft_print_p.c ft_print_u.c ft_print_x.c ft_strlen.c
	   
OBJECT_FILES = $(SRCS:.c=.o)

HEADER = ./


all: $(NAME) 

.c.o:
	$(CC) $(CFLAGS) $(HEADER) -c  $< -o $(<:.c=.o)

$(NAME): $(OBJECT_FILES)
	ar rsc $(NAME) $(OBJECT_FILES) 

clean:
	rm -rf $(OBJECT_FILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all
