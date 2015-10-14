#include <stdio.h>

int	ft_strcmp(const char *s1, const char *s2);

int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%d\n", ft_strcmp(av[1], av[2]));
	return (0);
}
