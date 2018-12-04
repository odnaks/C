/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 03:13:58 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 14:44:43 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*oldlists;
	t_list	*newlists;
	t_list	*lists;

	if (!lst || !f)
		return (NULL);
	oldlists = lst;
	newlists = f(oldlists);
	if (!newlists)
		return (NULL);
	lists = newlists;
	while (oldlists->next)
	{
		oldlists = oldlists->next;
		newlists->next = f(oldlists);
		newlists = newlists->next;
		if (!newlists)
			return (NULL);
	}
	return (lists);
}
