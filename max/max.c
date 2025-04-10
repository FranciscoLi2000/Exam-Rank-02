int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int			num;

	i = 1;
	if (len == 0)
		return (0);
	num = tab[0];
	while (i < len)
	{
		if (tab[i] > num)
			num = tab[i];
		i++;
	}
	return (num);
}
