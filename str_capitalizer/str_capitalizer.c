#include <unistd.h>
#include <ctype.h>

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

void	strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (islower(str[i]))
		str[i] = toupper(str[i]);
	while (str[i] != '\0')
	{
		if (isspace(str[i - 1]))
		{
			if (islower(str[i]))
				str[i] = toupper(str[i]);
		}
		i++;
	}
	ft_putstr(str);
}

int	main(int argc, char **argv)
{
	char	*word;
	int		i;

	if (argc == 2)
	{
		word = argv[1];
		strcapitalize(word);
	}
	write(1, "\n", 1);
	return (0);
}
