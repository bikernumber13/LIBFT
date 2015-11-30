/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 15:49:29 by mbouhier          #+#    #+#             */
/*   Updated: 2015/11/30 15:57:49 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*str;

	if (!dst || !src)
		return (NULL);
	if ((str = (char *)malloc(sizeof(*str) * len)) == NULL)
		return (NULL);
	ft_memcpy(str, src, len);
	ft_memcpy(dst, str, len);
	return (dst);
}
