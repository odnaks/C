/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 03:59:12 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 14:45:12 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		n;

	str = (char *)s;
	n = 0;
	while (str[n])
	{
		if ((int)str[n] == c)
			return ((char *)s + n);
		n++;
	}
	if ((int)str[n] == c)
		return ((char *)s + n);
	return (NULL);
}
