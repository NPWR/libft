#include <stdio.h>

int	ft_atoi(const char *s);

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("Testing input\n");
		printf("ft_atoi: %d\n", ft_atoi(av[1]));
		printf("sys atoi: %d\n", atoi(av[1]));
	}
	return (0);
}
