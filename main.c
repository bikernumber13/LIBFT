/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:04:13 by mbouhier          #+#    #+#             */
/*   Updated: 2015/11/25 18:55:43 by mbouhier         ###   ########.fr       */
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
	printf("Result => %s\n\n",ft_strdup(av[1]));
	}
	return (0);
}
