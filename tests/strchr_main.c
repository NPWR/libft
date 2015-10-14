#include <stdio.h>
#include <stdlib.h>

char	*ft_strchr(const char *s, char c);

int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%s\n", ft_strchr(av[1], av[2][0]));
	return (0);
}
