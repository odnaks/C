/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 03:10:47 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 14:44:38 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

t_list	*ft_lstcpy(t_list *list)
{
	t_list	*newlist;

	newlist = ft_lstnew(list->content, \
						list->content_size);
	if (newlist)
		return (newlist);
	return (NULL);
}
