#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char	bit;
	int			i;

	i = 8;
	bit = 0;
	while (i--)
	{
		bit = (octet >> i & 1) + 48;
		write(1, &bit, 1);
	}
}
#include <stdio.h>
int	main(void)
{
	char	n;

	printf("Put a number: ");
	scanf("%c", &n);
	print_bits(n);
	return (0);
}
