#include <string.h>

int	ft_strnequ(const char *s1, const char  *s2, size_t n)
{
	if ((!*s1 && !*s2) || !n)
		return (1);
	if (!*s1 || !*s2)
		return (0);
	return (ft_strnequ(++s1, ++s2, --n));
}
