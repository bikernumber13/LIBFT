#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	char	*str;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if ((str = (char *)malloc(sizeof(*str) * (len_s1 + len_s2 + 1))) == NULL)
		return (NULL);
	str = ft_strcat(s1, s2);
	return (str);
}
