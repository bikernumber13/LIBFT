#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		(*f)(&s[count]);
		count++;
	}
}
