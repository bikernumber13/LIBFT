/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:04:13 by mbouhier          #+#    #+#             */
/*   Updated: 2015/11/30 16:15:53 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	if (ac != 4)
	{
		printf("Tu es un caca !!");
	}
	else
	{
		printf("Test == %s",ft_strncpy(av[1], av[2], atoi(av[3])));
	}
	return (0);
}
