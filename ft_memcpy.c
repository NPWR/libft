void	ft_memcpy(void *dst, void *src, size_t n)
{
	int	i;

	i = -1;
	while (++i < n)
	{
		*(unsigned char *)(dst) = *(unsigned char *)(src);
		(unsigned char *)(src)++;
		(unsigned char *)(dst)++;
	}
}
