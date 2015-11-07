#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	char		*new;
	unsigned int	i;

	new = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
