#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	abs(int n)
{
	return (n < 0 ? -n : n);
}

void		ft_putnbr(int n)
{
	if (n < 0)
		ft_putchar('-');
	if (abs(n / 10) >= 1)
	{
		ft_putnbr(abs(n / 10));
		ft_putnbr(abs(n % 10));
	}
	else
		ft_putchar(abs(n) + '0');
}
