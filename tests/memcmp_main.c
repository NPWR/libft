#include <stdio.h>
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(void)
{
	unsigned char	*zone1;
	unsigned char	*zone2;
	int		i;

	zone1 = malloc(sizeof(unsigned char*) * 1024);
	zone2 = malloc(sizeof(unsigned char*) * 1024);
	for (i = 0; i < 1023; i++)
	{
		zone1[i] = i % 255;
		zone2[i] = i % 255;
	}
	zone1[i] = 49;
	zone2[i] = 1;
	printf("%d\n", ft_memcmp(zone1, zone2, 1024));
	return (0);
}
