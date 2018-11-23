/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 21:58:53 by drestles          #+#    #+#             */
/*   Updated: 2018/11/22 22:11:25 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	size_t	len1;
	size_t	len2;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		a = (char*)malloc(sizeof(char) * (len1 + len2) + 1);
		if (a)
		{
			a = ft_strcpy(a, s1);
			a = ft_strcat(a, s2);
			return (a);
		}
	}
	return (NULL);
}
