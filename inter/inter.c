#include <unistd.h>

void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = c;
		i++;
	}
	return (s);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	lookup[256] = {};

/*	ft_memset((int*)lookup, '0', 256);*/
	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j] && !lookup[(int)argv[2][j]])
					lookup[(int)argv[2][j]] = 1;
				write(1, &argv[2][j], 1);
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
