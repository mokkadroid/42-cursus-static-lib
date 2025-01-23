size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;
	int	count;
	
	if (!dst)
		return (0);
	if(!src)
		return (size);
	count = 0;
	while(src[count] != '\0')
		count ++;
	i=0;
	while(src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (count);
}