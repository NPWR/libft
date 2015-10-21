#include <unistd.h>

void	ft_putendl_fd(const char *s, int fd)
{
	int	i;
	char	endl;

	endl = '\n';
	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
	write(fd, &endl, 1);
}
