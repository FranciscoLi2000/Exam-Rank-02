#include <unistd.h>

int	main(int argc, char **argv)
{
	unsigned char	used[256];
	int			i;
	int			j;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (!used[argv[1][i]])
			{
				write(1, &argv[1][i], 1);
				used[argv[1][i]] = 1;
			}
			i++;
		}
		j = 0;
		while (argv[2][j])
		{
			if (!used[argv[2][j]])
			{
				write(1, &argv[2][j], 1);
				used[argv[2][j]] = 1;
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
