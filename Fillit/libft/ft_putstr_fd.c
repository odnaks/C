/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 03:56:30 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 14:45:08 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int		n;

	if (!s)
		return ;
	n = 0;
	while (s[n])
	{
		ft_putchar_fd(s[n], fd);
		n++;
	}
}