#include <string.h>

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)(dst))[i] = ((unsigned char *)(src))[i];
		i++;
	}
	return (dst);
}
