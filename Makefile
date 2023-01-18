NAME = libftprintf.a
INCLUDE = ft_printf.h
CFLAGS = -Wall -Wextra -Werror
CC = gcc
SOURCE = ft_putcharf.c ft_putnbrf.c ft_putstrf.c ft_percent.c ft_memset.c ft_printf.c ft_bzero.c ft_calloc.c ft_unsigned.c ft_char_to_hexa.c ft_hexa_to_char.c ft_long.c ft_select_hexa.c
OBJS = $(SOURCE:.c=.o) 

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean: 
	rm -f  $(OBJS)

fclean: clean
	rm -f  $(NAME)

re: fclean all

.PHONY: all clean fclean re