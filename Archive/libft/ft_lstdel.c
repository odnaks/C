/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 03:11:32 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 14:44:39 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*tmp;
	t_list	*lst;

	lst = *alst;
	while (lst)
	{
		tmp = lst->next;
		ft_lstdelone(&lst, del);
		lst = tmp;
	}
	*alst = NULL;
}
