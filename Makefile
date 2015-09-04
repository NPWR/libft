CC		=	gcc
FLAGS	=	-c -Wall -Werror -Wextra
SRC		=	*.c
OBJ		=	*.o
NAME	=	libft.a

all	:
	$(CC) $(FLAGS) $(SRC)
	ar -rc $(NAME) $(OBJ)
clean	:
	rm $(OBJ)

fclean	:	clean
	rm $(NAME)

re		:	fclean all
