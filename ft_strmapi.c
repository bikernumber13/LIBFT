#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		len;
	int		count;

	len = ft_strlen(s);
	count = 0;
	if ((str = (char *)malloc(sizeof(*str) * (len + 1))) == NULL)
			return (NULL);
	while (s[count] != '\0')
	{
		str[count] = (*f)(count, &s[count]);
		count++;
	}
	str[count] = '\0';
	return (str);
}
