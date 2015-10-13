#include <stdio.h>
#include <stdlib.h>

char	*ft_strnstr(char *haystack, char *needle, size_t len);
char	*ft_strstr(char *haystack, char *needle);

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("Strstr: %s\n", ft_strstr(av[1], av[2]));
		printf("Strnstr(3): %s\n", ft_strnstr(av[1], av[2], 3));
	}
	return (0);
}
