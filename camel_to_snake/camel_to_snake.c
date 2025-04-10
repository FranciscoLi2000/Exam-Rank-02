#include <unistd.h>
#include <ctype.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (isupper(argv[1][i]))
			{
				write(1, "_", 1);
				argv[1][i] = tolower(argv[1][i]);
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
