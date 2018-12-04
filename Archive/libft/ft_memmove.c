/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 03:27:42 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 14:44:54 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memmove(void *to, const void *src, size_t n)
{
	char		*dest;
	const char	*source;

	dest = to;
	source = src;
	if (dest <= source)
		while (n-- > 0)
			*dest++ = *source++;
	else
		while (n-- > 0)
			dest[n] = source[n];
	return (to);
}
