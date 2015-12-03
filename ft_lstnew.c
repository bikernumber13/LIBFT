/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 12:22:44 by mbouhier          #+#    #+#             */
/*   Updated: 2015/12/03 15:54:27 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst_new;

	if ((lst_new = (t_list*)malloc(sizeof(t_list) * (content_size))) == NULL)
		return (NULL);
	lst_new->content = (void *)content;
	if (!content)
		lst_new->content_size = 0;
	else
		lst_new->content_size = (size_t)content_size;
	lst_new->next = NULL;
	return (lst_new);
}
