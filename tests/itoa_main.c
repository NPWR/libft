#include <stdio.h>

char	*ft_itoa(int nbr);

int	main(int ac, char **av)
{
	int	nbr;

	nbr = atoi(av[1]);
	printf("%s\n", ft_itoa(nbr));
	return (0);
}
