/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 03:14:40 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 14:44:44 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		new->content = ft_strnew(content_size + 1);
		if (!new->content)
			return (NULL);
		ft_bzero(new->content, content_size);
		ft_memcpy((new->content), content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
