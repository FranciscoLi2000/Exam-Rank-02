/*
size_t	ft_strcspn(const char *s, const char *reject)
{
	const char	*start;
	const char	*s2;

	start = s;
	while (*s++)
	{
		s2 = reject;
		while (*s2 != '\0')
		{
			if (*s == *s2++)
				return (s - start);
		}
	}
	return (s - start);
}*/
size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i++])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
	}
	return (i);
}
