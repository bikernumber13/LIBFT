/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:22:08 by mbouhier          #+#    #+#             */
/*   Updated: 2015/11/30 11:36:24 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*str;
	size_t	count;
	size_t	start;
	size_t	len;

	count = 0;
	len = ft_strlen(s) - 1;
	while (s[count] == 32 || s[count] == ',' || s[count] == '\n')
		count++;
	start = count - 1;
	while (s[len] == 32 || s[len] == ',' || s[len] == '\n')
		len--;
	if ((str = (char *)malloc(sizeof(*str) * (len - start + 1))) == NULL)
		return (NULL);
	count = 0;
	while (start <= len)
	{
		str[count] = s[start];
		count++;
		start++;
	}
	str[count] = '\0';
	return (str);
}
