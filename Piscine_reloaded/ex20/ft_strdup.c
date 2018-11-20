/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 05:35:45 by drestles          #+#    #+#             */
/*   Updated: 2018/11/20 06:08:33 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src)
{
	int n;

	n = 0;
	while (*src)
	{
		n++;
		src++;
	}
	return (n);
}

char	*ft_strdup(char *src)
{
	int		n;
	int		i;
	char	*a;

	n = ft_strlen(src);
	a = malloc(sizeof(char) * n + 1);
	i = 0;
	while (i < n)
	{
		a[i] = src[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
