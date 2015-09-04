#include "libft.h"

void	*ft_bzero(void *ptr, size_t n)
{
	unsigned int	i;

	i = -1;
	while (++i < n)
		((unsigned char *)(ptr))[i] = 0;
	return (ptr);
}