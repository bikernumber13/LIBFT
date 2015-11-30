/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:07:06 by mbouhier          #+#    #+#             */
/*   Updated: 2015/11/30 17:34:03 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int nbr)
{
	int result;

	result = 0;
	if (nbr == 0)
		return (result + 1);
	while (nbr > 0)
	{
			nbr = nbr / 10;
			result++;
	}
	return (result);
}

char		*ft_itoa(int nbr)
{
	char	*str;
	int		count;
	int		sign;

	if (nbr < 0)
	{
			nbr = -nbr;
			count = ft_len(nbr) + 1;
			sign = 1;
	}
	else
		count = ft_len(nbr);
	if ((str = (char *)malloc(sizeof(*str) * (count + 1))) == NULL)
		return (NULL);
	if (nbr == 0)
		str[0] = '0';
	str[count--] = '\0';
	while (nbr > 0)
	{
			str[count--] = (nbr % 10) + '0';
			nbr /= 10;
	}
	if (sign == 1)
			str[0] = '-';
	return (str);
}
