int	ft_atoi(const char *s)
{
	int	total;
	int	factor;

	total = 0;
	factor = 1;
	if (*s == '-')
	{
		factor = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		total *= 10;
		total += factor * (*s - '0');
		s++;
	}
	return ((int)total);
}