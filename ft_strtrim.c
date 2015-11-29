#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(const char *s)
{
	int 	count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		count;
	int		start;
	int		len;

	count = 0;
	len = ft_strlen(s) - 1;
	while (s[count] == 32 || s[count] == ',' || s[count] == '\n')
		count++;
	start = count - 1;
	while (s[len] == 32 || s[len] == ',' || s[len] == '\n')
		len--;
	if ((str = (char *)malloc(sizeof(*str) * (len - start + 1))) == NULL)
		return (NULL);
	count = 0;
	while (start <= len)
	{
		str[count] = s[start];
		count++;
		start++;
	}
	str[count] = '\0';
	return (str);
}
