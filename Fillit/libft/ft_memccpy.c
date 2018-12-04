/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 03:16:39 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 14:44:46 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t num)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char*)dest;
	str2 = (unsigned char*)src;
	i = 0;
	while (i < num)
	{
		str1[i] = str2[i];
		if (str1[i] == (unsigned char)c)
			return ((void*)(dest + i + 1));
		++i;
	}
	return (NULL);
}
