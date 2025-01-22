size_t	ft_strlen(const char *s){
	int	i;

	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}
