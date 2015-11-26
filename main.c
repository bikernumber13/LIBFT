/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:04:13 by mbouhier          #+#    #+#             */
/*   Updated: 2015/11/26 16:22:34 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("Tu es un caca !!");
	}
	else
	{
	printf("MOI => %d\n\n",ft_atoi((av[1])));
	printf("OFF => %d\n\n",atoi(av[1]));
	}
	return (0);
}
