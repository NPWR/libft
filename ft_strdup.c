#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*new;
	int	i;

	i = 0;
	while (s[i])
		i++;
	new = (char *)malloc(sizeof(char) * (i + 1));
	i = -1;
	while (s[++i])
		new[i] = s[i];
	new[i] = '\0';
	return (new);
}
