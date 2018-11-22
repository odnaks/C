/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 21:03:49 by drestles          #+#    #+#             */
/*   Updated: 2018/11/22 01:11:15 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*srcn;
	char	*dstn;
	size_t	i;

	i = 0;
	srcn = (char *)src;
	dstn = (char *)dst;
	if (srcn < dstn)
		while ((int)(--len) >= 0)
			*(dstn + len) = *(srcn + len);
	else
		while (++i < len)
			*(dstn + i) = *(srcn + i);
	return (dst);
}
