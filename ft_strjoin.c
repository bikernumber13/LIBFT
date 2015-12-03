/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 15:44:24 by mbouhier          #+#    #+#             */
/*   Updated: 2015/12/03 18:35:24 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	char	*str;
	char	*str2;

	len_s1 = ft_strlen(s1);
	if ((str = (char *)malloc(sizeof(*str) * (len_s1 + 1))) == NULL)
		return (NULL);
	str = ft_strcpy(str, (char*)s1);
	len_s2 = ft_strlen(s2);
	if ((str2 = (char *)malloc(sizeof(*str2) * (len_s1 + len_s2 + 1))) == NULL)
		return (NULL);
	str2 = ft_strcat(str, (char*)s2);
	return (str2);
}
