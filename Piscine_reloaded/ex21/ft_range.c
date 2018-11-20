/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 06:20:18 by drestles          #+#    #+#             */
/*   Updated: 2018/11/20 06:40:27 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*a;
	int	n;
	int	i;

	n = max - min;
	if (n <= 0)
		return (NULL);
	a = malloc(sizeof(int) * n);
	i = 0;
	while (min < max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
