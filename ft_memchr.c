#include <stdlib.h>
#include <string.h>

void	*ft_memchr(void *ptr, int value, size_t num)
{
	unsigned int i;

	i = 0;
	while (i < (unsigned int)num)
	{
		if ((unsigned char)(value) == ((unsigned char*)(ptr))[i])
			return ((void*)(((unsigned char*)(ptr)) + i));
		i++;
	}
	return (NULL);
}
