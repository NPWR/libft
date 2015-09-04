CC		=	gcc
FLAGS	=	-c -Wall -Werror -Wextra
SRC		=	ft_putchar.c
OBJ		=	ft_putchar.o
NAME	=	libft.a

all	:
	$(CC) $(FLAGS) $(SRC)
	ar -rc $(NAME) $(OBJ)
clean	:
	rm $(OBJ)

fclean	:	clean
	rm $(NAME)

re		:	fclean all
