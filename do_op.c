#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	add(int a, int b)
{
	return (a + b);
}

int	sub(int a, int b)
{
	return (a - b);
}

int	multi(int a, int b)
{
	return (a * b);
}

int	ft_div(int a, int b)
{
	return (a / b);
}

int	mod(int a, int b)
{
	return (a % b);
}

int	main(int argc, char **argv)
{
	char	op;
	int		val1;
	int		val2;
	int		result;

	if (argc != 4)
	{
		printf("Usage: %s <value1> <operator> <value2>\n", argv[0]);
		return (1);
	}
	val1 = atoi(argv[1]);
	op = argv[2][0];
	val2 = atoi(argv[3]);
	if (op == '+')
		result = add(val1, val2);
	else if (op == '-')
		result = sub(val1, val2);
	else if (op == '*')
		result = multi(val1, val2);
	else if (op == '/')
		result = ft_div(val1, val2);
	else if (op == '%')
		result = mod(val1, val2);
	else
	{
		printf("Invalid operator '%c'\n", op);
		return (1);
	}
	printf("%d\n", result);
	return (0);
}
