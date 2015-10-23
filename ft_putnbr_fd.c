#include <unistd.h>
#include "libft.h"

static int	abs(int n)
{
	return (n < 0 ? -n : n);
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar('-', fd);
	if (abs(n / 10) >= 1)
	{
		ft_putnbr(abs(n / 10), fd);
		ft_putnbr(abs(n % 10), fd);
	}
	else
		ft_putchar(abs(n) + '0', fd);
}
