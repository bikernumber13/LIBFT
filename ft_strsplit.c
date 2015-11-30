/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 13:20:39 by mbouhier          #+#    #+#             */
/*   Updated: 2015/11/30 15:04:20 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (!s[index])
	{
		if (s[index] != c)
		{
			while (s[index] != c)
				index++;
			count++;
		}
		else
			index++;
	}
	return (count);
}

static	int	ft_len_word(char const *s, char c, int index)
{
	int	len;

	len = 0;
	while (s[index] != c)
		len++;
	return (len);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		count_word;
	int		index_tab;
	int		index_s;
	int		count_tab;

	index_tab = 0;
	index_s = 0;
	count_word = ft_count_word(s, c);
	if ((tab = (char**)malloc(sizeof(**tab)*(count_word + 1))) == NULL)
		return (NULL);
	while (!s[index_s])
	{
		if (s[index_s] != c)
		{
			if ((tab[index_tab] = (char*)malloc(sizeof(*tab)*(ft_len_word(s,c, index_s) + 1))) == NULL)
					return (NULL);
			while (s[index_s] != c)
			{
				tab[index_tab][count_tab] = s[index_s];
				index_s++;
				count_tab++;
			}
			tab[index_tab][count_tab] = '\0';
			count_tab = 0;
		}
		else
			index_s++;
	}
	return (tab);
}
