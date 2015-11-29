#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s);

int		main(int ac, char **av)
{
	if (ac == 2)
		printf("TEST ==>%s\n\n",ft_strtrim(av[1]));
	return (0);
}
