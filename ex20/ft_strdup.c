char	*ft_strdup(char *src)
{
	int		i;
	char	*cpy;

	i = 0;
	if (src == '\0')
		return (NULL);
	cpy = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (cpy == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
