/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 03:12:51 by drestles          #+#    #+#             */
/*   Updated: 2018/11/21 20:49:34 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *a, const char *b)
{
	size_t	i;
	size_t	j;
	size_t	n;

	n = ft_strlen(b);
	i = 0;
	while (a[i])
	{
		j = 0;
		while (a[i] && a[i] == b[j])
		{
			i++;
			j++;
		}
		if (j == n)
			return (&(((char*)a)[i - n]));
		else
			i -= j;
		i++;
	}
	return (NULL);
}
