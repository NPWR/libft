#include <stdlib.h>

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)(dst))[i] = ((unsigned char *)(src))[i];
		if (((unsigned char *)(dst))[i] == (unsigned char)(c))
			return ((unsigned char *)(dst) + i);
		i++;
	}
	return (NULL);
}
