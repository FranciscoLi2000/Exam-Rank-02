#include "do_op.h"

int	main(int argc, char **argv)
{
	char	op;
	int		val1;
	int		val2;
	int		result;

	if (argc == 4)
	{
		val1 = atoi(argv[1]);
		op = argv[2][0];
		val2 = atoi(argv[3]);
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
			multi(val1, val2);
			return (result);
		}
		else if (op == '/')
		{
			divide(val1, val2);
			return (result);
		}
		else if (op == '%')
		{
			result = mod(val1, val2);
			return (result);
		}
	}
	printf("\n");
	return (0);
}
