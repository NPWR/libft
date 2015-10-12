#include <string.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	v;
	unsigned int	i;

	i = 0;
	v = (unsigned char)value;
	while (i < num)
		((unsigned char *)(ptr))[i++] = v;
	return (ptr);
}
