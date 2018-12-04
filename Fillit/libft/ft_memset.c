/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 03:28:57 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 14:44:55 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memset(void *s, int c, size_t count)
{
	char	*str;

	if (count)
	{
		str = (char *)s;
		while (count--)
			*str++ = c;
	}
	return (s);
}
