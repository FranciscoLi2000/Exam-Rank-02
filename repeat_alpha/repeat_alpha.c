#include <unistd.h>

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
