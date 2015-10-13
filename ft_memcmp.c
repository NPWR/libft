#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (!n)
		return (0);
	if (*((unsigned char *)(s1)) != *((unsigned char *)(s2)))
		return (*((unsigned char *)s1) - *((unsigned char *)s2));
	return (ft_memcmp((unsigned char *)(s1) + 1, (unsigned char *)(s2) + 1, n - 1));
}
