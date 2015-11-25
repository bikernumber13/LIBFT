/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:39:37 by mbouhier          #+#    #+#             */
/*   Updated: 2015/11/25 16:20:39 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int			count_s1;
	int			count_s2;
	const char	*save;

	count_s1 = 0;
	save = s1;
	if (s2[0] == '\0')
		return ((char *)&s1[count_s1]);
	while (s1[count_s1] != '\0')
	{
		count_s2 = 0;
		if (s1[count_s1] == s2[count_s2])
		{
			save = &s1[count_s1];
			while (s1[count_s1] == s2[count_s2])
			{
				count_s1++;
				count_s2++;
				if (s2[count_s2] == '\0')
					return ((char *)save);
			}
		}
		count_s1++;
	}
	return (NULL);
}
