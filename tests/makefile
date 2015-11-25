NAME = test
LIB = libft.a

ATOI = atoi_main.c
ITOA = itoa_main.c
ASCII = char_tests_main.c
MEMCMP = memcmp_main.c
STRCHR = strchr_main.c
STRCMP = strcmp_main.c
STRLCAT = strlcat_main.c
STRNSTR = strnstr_main.c

clean:
	rm -rf $(NAME)

ft_atoi:
	$(CC) $(LIB) $(ATOI) -o $(NAME)

ft_itoa:
	$(CC) $(LIB) $(ITOA) -o $(NAME)

ft_ascii:
	$(CC) $(LIB) $(ASCII) -o $(NAME)

ft_isalnum: ft_ascii

ft_isalpha: ft_ascii

ft_isascii: ft_ascii

ft_isdigit: ft_ascii

ft_isprint: ft_ascii

ft_memcmp:
	$(CC) $(LIB) $(MEMCMP) -o $(NAME)

ft_strchr:
	$(CC) $(LIB) $(STRCHR) -o $(NAME)

ft_strcmp:
	$(CC) $(LIB) $(STRCMP) -o $(NAME)

ft_strlcat:
	$(CC) $(LIB) $(STRLCAT) -o $(NAME)

ft_strnstr:
	$(CC) $(LIB) $(STRNSTR) -o $(NAME)

