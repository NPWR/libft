#include <unistd.h>

void	ft_putendl(const char *s)
{
	int	i;
	char	endl;

	endl = '\n';
	i = 0;
	while (s[i])
		i++;
	write(1, s, i);
	write(1, &endl, 1);
}
