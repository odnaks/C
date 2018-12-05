/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoch <gkoch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 04:01:46 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 17:57:55 by gkoch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if ((s1 && s2 && !ft_strcmp(s1, s2)) ||
		(!s1 && !s2))
		return (1);
	return (0);
}
