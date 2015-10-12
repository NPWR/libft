#include <stdlib.h>

static int	str_is_equal(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (!*s2)
		return (1);
	return (0);
}

char		*ft_strstr(char *src, char *to_find)
{
	if (!*to_find)
		return (src);
	while (*src)
	{
		if (str_is_equal(src, to_find))
			return (src);
		src++;
	}
	return (NULL);
}
