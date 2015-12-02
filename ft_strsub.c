/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:21:36 by mbouhier          #+#    #+#             */
/*   Updated: 2015/12/02 18:19:37 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		count;
	char		*str;

	count = 0;
	if ((str = (char *)malloc(sizeof(*str) * (len + 1))) == NULL)
		return (NULL);
	while (count < len)
		str[count++] = s[start++];
	str[count] = '\0';
	return (str);
}
