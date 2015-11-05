#include "libft.h"

char	*ft_strmap(char const *s, char(*f)(char))
{
	char		*new;
	unsigned int	i;

	new = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
