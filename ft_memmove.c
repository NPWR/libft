#include <string.h>

void	*ft_memmove(void *dst, void *src, size_t n)
{
	unsigned int	i;
	unsigned char	buf[n];

	i = 0;
	while (i < n)
	{
		buf[i] = ((unsigned char *)(src))[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((unsigned char *)(dst))[i] = buf[i];
		i++;
	}
	return (dst);
}
