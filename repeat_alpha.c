#include <unistd.h>
/*
int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				j = 1;
				while (j < argv[1][i] - 96)
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				j = 1;
				while (j < argv[1][i] - 64)
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
*/

void	write_repeatedly(char c, int base)
{
	int	repeat;
	int	j;

	repeat = c - base;
	j = 1;
	while (j < repeat)
	{
		write(1, &c, 1);
		j++;
	}
}

void	process_char(char c)
{
	if (c >= 'a' && c <= 'z')
		write_repeatedly(c, 96);
	else if (c >= 'A' && c <= 'Z')
		write_repeatedly(c, 64);
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			process_char(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
