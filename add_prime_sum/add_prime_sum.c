#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

int	main(int argc, char **argv)
{
	int	num;

	if (argc == 2)
	{
		i = 0;
		num = atoi(argv[1][i]);
		while (argv[1][i])
		{
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
