#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new;

	new = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (new == NULL)
		return (NULL);
	ft_strcpy(new, s1);
	ft_strcpy(new + ft_strlen(s1), s2);
	return (new);
}
