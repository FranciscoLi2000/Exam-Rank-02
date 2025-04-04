#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char	*dst;
	int		len;
	int		i;

	len = strlen(src);
	dst = malloc((len + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
