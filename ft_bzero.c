void	ft_bzero(void *ptr, size_t n)
{
	int		i;

	i = -1;
	while (++i < n)
	{
		*(unsigned char *)ptr = 0;
		(unsigned char *)(ptr)++;
	}
}
