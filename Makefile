##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## my_printf
##

CC 	= 	gcc

SRC 	=	src/my_printf.c\
			src/compare.c\
			src/my_strlint.c\
			src/my_strlunint.c\
			src/my_hexadecimal.c\
			src/my_pow.c\
			src/percent/p_i.c\
			src/percent/p_d.c\
			src/percent/p_c.c\
			src/percent/p_s.c\
			src/percent/p_x.c\
			src/percent/p_X.c\
			src/percent/p_o.c\
			src/percent/p_u.c\
			lib/my_putchar.c\
			lib/my_putstr.c\
			lib/my_strlen.c\
			lib/unintcpy.c\
			lib/intcpy.c

OBJ     =       $(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS 	=	-W -Wall -Wextra -pedantic


all:	$(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

sweet:	all clean
