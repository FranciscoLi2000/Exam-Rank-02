#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s2[j] == s1[i])
				return ((char*)s1 + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	str1[50];
	char	str2[50];

	fgets(str1, sizeof(str1), stdin);
	fgets(str2, sizeof(str2), stdin);
	str1[strcspn(str1, "\n")] = '\0';
	str2[strcspn(str2, "\n")] = '\0';
	printf("original %s\n", strpbrk(str1, str2));
	printf("mine %s\n", ft_strpbrk(str1, str2));
	return (0);
}
