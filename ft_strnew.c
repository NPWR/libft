#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*zone;

	zone = (char*)malloc(sizeof(char) * size);
	if (zone == NULL)
		return (NULL);
	ft_memset((void*)zone, '\0', size);
	return (zone);
}
