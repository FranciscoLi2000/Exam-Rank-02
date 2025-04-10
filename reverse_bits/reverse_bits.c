unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result;
	unsigned int	i;

	result = 0;
	i = 8;
	while (i--)
	{
		result = (result << 1) | (octet & 1);
		octet = octet >> 1;
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	unsigned char	c;

	scanf("%c", &c);
	printf("%c\n", reverse_bits(c));
	return (0);
}
