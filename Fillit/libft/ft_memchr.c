/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 03:17:23 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 14:44:48 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t num)
{
	size_t		n;
	const char	*str;

	str = (const char*)s;
	n = 0;
	while (n < num)
	{
		if ((unsigned char)str[n] == (unsigned char)c)
			return ((char*)s + n);
		n++;
	}
	return (NULL);
}
