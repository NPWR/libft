#include <unistd.h>
#include "libft.h"

static int	abs(int n)
{
	return (n < 0 ? -n : n);
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (abs(n / 10) >= 1)
	{
		ft_putnbr_fd(abs(n / 10), fd);
		ft_putnbr_fd(abs(n % 10), fd);
	}
	else
		ft_putchar_fd(abs(n) + '0', fd);
}
