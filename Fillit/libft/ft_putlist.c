/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoch <gkoch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 03:38:13 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 17:57:19 by gkoch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_putlist(t_list *lst)
{
	char	*str;

	str = (char *)lst->content;
	ft_putstr(str);
	ft_putchar('\n');
}
