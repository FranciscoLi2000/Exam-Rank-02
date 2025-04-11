#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		i = 1;
		while (i < 10)
		{
			ft_putnbr(i);
			ft_putstr(" x ");
			ft_putnbr(n);
			ft_putstr(" = ");
			ft_putnbr(i * n);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
