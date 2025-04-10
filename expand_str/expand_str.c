#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		i = 0;
		while (ft_isspace(argv[1][i]))
			i++;
		while (argv[1][i])
		{
			if (ft_isspace(argv[1][i]))
				space = 1;
			if (!ft_isspace(argv[1][i]))
			{
				if (space == 1)
					write(1, "   ", 3);
				space = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
