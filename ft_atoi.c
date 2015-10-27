int	ft_atoi(const char *s)
{
	int	total;
	int	factor;

	total = 0;
	while (*s == '\t' || *s == ' ' || *s == '\n'
		|| *s == '\r' || *s == '\v' || *s == '\f')
		s++;
	factor = *s == '-' ? -1 : 1;
	s += *s == '+' || *s == '-' ? 1 : 0;
	while (*s >= '0' && *s <= '9')
	{
		total *= 10;
		total += factor * (*s - '0');
		s++;
	}
	return (total);
}
