#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	found;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		while (argv[1][i] != '\0')
		{
			found = 0;
			while (argv[2][j] != '\0')
			{
				if (argv[2][j] == argv[1][i])
				{
					found = 1;
					j++;
					break ;
				}
				j++;
			}
			if (!found)
			{
				write(1, "\n", 1);
				return (0);
			}
			i++;
		}
		i = 0;
		while (argv[1][i] != '\0')
		{
			write(1, &s1[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
