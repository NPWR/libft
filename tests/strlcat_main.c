#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t n);

int	main(int ac, char **av)
{
	char	buf[20];
	int	i;
	
	for (i = 0; i < 20; i++)
		buf[i] = 0;
	for (i = 1; i < ac; i++)
		ft_strlcat(buf, av[i], 20);
	printf("%s\n", buf);
	return (0);
}
