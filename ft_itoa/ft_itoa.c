#include <stdlib.h>

static int	get_len(int n)
{
	int		len;
	long	num;

	len = 0;
	num = n;
	if (num <= 0)
	{
		len++;
		num = -num;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	long	num;
	char	*str;
	char	*ptr;
	int		len;

	num = nbr;
	len = get_len(num);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ptr = str;
	if (num == 0)
		*ptr++ = '0';
	ptr += len;
	*ptr-- = '\0';
	if (num < 0)
		num = -num;
	while (num > 0)
	{
		*ptr-- = (num % 10) + '0';
		num /= 10;
	}
	if (nbr < 0)
		*str = '-';
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	*s;
	int		n;

	printf("Give me a integer.\n");
	scanf("%i", &n);
	s = ft_itoa(n);
	if (!s)
	{
		printf("Sorry, I cannot convert it.\n");
		return (1);
	}
	else
		printf("Now I can convert the int to a string %s.\n", s);
	free(s);
	return (0);
}
