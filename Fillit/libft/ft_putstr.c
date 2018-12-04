/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 03:56:43 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 14:45:09 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_putstr(const char *str)
{
	int		n;

	if (!str)
		return ;
	n = -1;
	while (str[++n])
		ft_putchar(str[n]);
}
