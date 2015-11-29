#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
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
		str[count] = (*f)(&s[count]);
		count++;
	}
	str[count] = '\0';
	return (str);
}
