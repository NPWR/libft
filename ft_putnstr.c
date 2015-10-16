#include <unistd.h>
#include <string.h>

void	ft_putnstr(const char *s, size_t n)
{
	write(1, s, n);
}
