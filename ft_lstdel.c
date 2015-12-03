/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 13:25:31 by mbouhier          #+#    #+#             */
/*   Updated: 2015/12/03 15:59:11 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;
	t_list	*move;

	lst = *alst;
	while (lst)
	{
		move = lst->next;
		del(lst->content, lst->content_size);
		free(lst);
		lst = move;
	}
	*alst = NULL;
}
