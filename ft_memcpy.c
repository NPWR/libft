void	*ft_memcpy(void *dst, void *src, size_t n)
{
	int	i;

	i = -1;
	while (++i < n)
		(unsigned char *)(dst)[i] = (unsigned char *)(src)[i];
	return (dst);
}
