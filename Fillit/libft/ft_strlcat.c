/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 04:05:14 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 14:45:24 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		dstl;
	size_t		srcl;

	i = 0;
	dstl = ft_strlen(dest);
	srcl = ft_strlen(src);
	if (size <= dstl)
		return (srcl + size);
	while (dest[i] && i < (size - 1))
		i++;
	while (*src && i < (size - 1))
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dstl + srcl);
}
