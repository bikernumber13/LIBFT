/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 15:44:24 by mbouhier          #+#    #+#             */
/*   Updated: 2016/01/02 11:08:02 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
char	*ft_strjoin(const char *s1, const char *s2)
{
	unsigned int	len;
	unsigned int	count1;
	unsigned int	count2;
	char			*buf;

	count1 = 0;
	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		if ((buf = (char *)malloc(sizeof(char *) * len + 1)) == NULL)
			return (NULL);
		while (count1 < len && s1[count1] != '\0')
		{
			buf[count1] = s1[count1];
			count1++;
		}
		count2 = 0;
		while (count1 < len && s2[count2] != '\0')
			buf[count1++] = s2[count2++];
		buf[count1] = '\0';
		return (buf);
	}
	return (0);
}
