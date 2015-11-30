/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:11:02 by mbouhier          #+#    #+#             */
/*   Updated: 2015/11/30 18:05:08 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		((char *)dst)[count] = ((char *)src)[count];
		if (((char *)src)[count] == c)
			return ((void *)dst);
		count++;
	}
	return (NULL);
}
