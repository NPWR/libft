#include <unistd.h>

void	ft_putstr_fd(const char *s, int fd)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
}
