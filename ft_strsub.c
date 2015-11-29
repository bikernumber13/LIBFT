/*# include "libft.h"*/
#include <string.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	char	*str;

	count = 0;
	if ((str = (char *)malloc(sizeof(*str) * (len + 1))) == NULL)
		return (NULL);
	while (count < len)
	{
		str[count] = s[start - 1];
		count++;
		start++;
	}
	str[count] = '\0';
	return (str);
}
