/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 20:05:06 by drestles          #+#    #+#             */
/*   Updated: 2018/11/22 20:38:54 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*a;
	size_t			n;
	unsigned char	i;

	if (s)
	{
		n = ft_strlen(s);
		a = (char*)malloc(sizeof(char) * n + 1);
		if (a)
		{
			i = 0;
			while (s[i])
			{
				a[i] = f(i, s[i]);
				i++;
			}
			a[i] = '\0';
			return (a);
		}
	}
	return (NULL);
}
