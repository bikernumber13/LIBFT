/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:15:22 by mbouhier          #+#    #+#             */
/*   Updated: 2015/11/26 18:25:44 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	result;
	int	negative;

	result = 0;
	negative = 1;
	while (*str != '\0')
	{
		if (((ft_isdigit(*str)) == 1))
			result = result * 10 + *str - '0';
		else if (*str == '-')
		{
			if (((*str - 1) == '+') || (*str + 1) == '+')
				return (0);
			else
				negative = -1;
		}
		else if (((*str - 1) == (ft_isdigit(*str) == 1)) && (*str == 32))
			break;
		str++;
	}
	return (result * negative);
}
