/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 21:40:28 by drestles          #+#    #+#             */
/*   Updated: 2018/11/22 22:35:47 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*a;

	if (s)
	{
		while (start > 0)
		{
			s++;
			start--;
		}
		a = ft_strnew(len);
		if (a)
		{
			a = ft_strncpy(a, s, len);
			return (a);
		}
	}
	return (NULL);
}
