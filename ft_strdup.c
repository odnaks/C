/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 03:12:51 by drestles          #+#    #+#             */
/*   Updated: 2018/11/22 06:53:35 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*a;
	size_t	n;
	size_t	i;

	n = ft_strlen(s1);
	a = (char *)malloc(n * sizeof(*s1) + 1);
	if (a)
	{
		i = 0;
		while (i < n)
		{
			a[i] = s1[i];
			i++;
		}
		a[i] = '\0';
	}
	return (a);
}
