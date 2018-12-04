/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 04:13:09 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 14:45:32 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if ((s1 && s2 && !ft_strncmp(s1, s2, n)) ||
		(!s1 && !s2))
		return (1);
	return (0);
}
