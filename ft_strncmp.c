#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	count;

	count = 0;
	while ((s1[count] != '\0' || s2[count] != '\0') || count < n)
	{
		if (s1[count != s2[count]])
		{
			return (s1[count] - s2[count]);
		}
		count++;
	}
	return (0);
}
