/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoch <gkoch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 03:12:52 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 17:56:14 by gkoch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*lists;

	lists = lst;
	while (!lists || !f)
		return ;
	while (lists->next)
	{
		f(lists);
		lists = lists->next;
	}
	f(lists);
}
