#include <stdlib.h>
#include "libft.h"

static int	is_blank(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char		*ft_strtrim(char const *s)
{
	char	*new;
	char	*ptr;

	new = ft_strdup(s);
	while (is_blank(*new))
		new++;
	ptr = new;
	while (*ptr)
		ptr++;
	while (is_blank(*(--ptr)))
		*ptr = '\0';
	return (new);
}
