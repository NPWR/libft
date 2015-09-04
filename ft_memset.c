void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	v;
	int				i;

	i = -1;
	v = (unsigned char)value;
	while (++i < num)
		(unsigned char *)(ptr)[i] = v;
	return (ptr);
}
