void	ft_striteri(char *s, void (*f)(unsigned int i, char*))
{
	char	*ptr;

	ptr = s;
	while (*ptr)
	{
		f((unsigned int)(ptr - s), ptr);
		ptr++;
	}
}
