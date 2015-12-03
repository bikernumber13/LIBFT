/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:55:51 by mbouhier          #+#    #+#             */
/*   Updated: 2015/12/03 18:41:01 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	count;
	char	*result;

	count = 0;
	result = (char*)b;
	while (count < len)
	{
		result[count] = (unsigned char)c;
		count++;
	}
	return ((void*)result);
}
