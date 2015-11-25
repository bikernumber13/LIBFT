/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:01:44 by mbouhier          #+#    #+#             */
/*   Updated: 2015/11/25 16:19:40 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int count;
	int len;

	count = 0;
	len = ft_strlen(s) + 1;
	while (count <= len)
	{
		if (c == s[count])
		{
			s = &s[count];
			return ((char *)s);
		}
		count++;
	}
	return (NULL);
}
