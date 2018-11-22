/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 03:12:51 by drestles          #+#    #+#             */
/*   Updated: 2018/11/21 18:46:16 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	sym;
	int		n;

	sym = (char)c;
	n = (int)ft_strlen(s);
	while (n >= 0)
	{
		if (s[n] == sym)
			return (&(((char*)s)[n]));
		n--;
	}
	return (NULL);
}
