#include "do_op.h"

int	do_op(int val1, char op, int val2)
{
	int	result;

	if (op == '+')
	{
		result = sum(val1, val2);
		return (result);
	}
	else if (op == '-')
	{
		result = sub(val1, val2);
		return (result);
	}
	else if (op == '*')
	{
		result = multi(val1, val2);
		return (result);
	}
	else if (op == '/')
	{
		result = divide(val1, val2);
		return (result);
	}
	else if (op == '%')
	{
		result = mod(val1, val2);
		return (result);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	nb;

	if (argc == 4)
	{
		nb = do_op(atoi(argv[1]), argv[2][0], atoi(argv[3]));
		printf("%d", nb);
	}
	printf("\n");
	return (0);
}
