char	*ft_strrev(char *str)
{
	char	tmp;
	int		i;
	int		len;

	len = 0;
	while (str[len])
		len++;
	i = 0;
	while (i < len - 1)
	{
		tmp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = tmp;
		i++;
		len--;
	}
	return (str);
}
