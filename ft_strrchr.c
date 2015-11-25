/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:20:18 by mbouhier          #+#    #+#             */
/*   Updated: 2015/11/25 16:19:54 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int count;
	int len;

	count = 0;
	len = ft_strlen(s) + 1;
	while (len >= count)
	{
		if (c == s[len])
		{
			s = &s[len];
			return ((char *)s);
		}
		len--;
	}
	return (NULL);
}
