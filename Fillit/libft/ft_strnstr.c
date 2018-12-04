/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 04:14:22 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 14:45:34 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	int		i;

	if (!to_find[0])
		return ((char*)str);
	while (n && *str)
	{
		i = 0;
		if (*str == to_find[i])
		{
			while (to_find[i] && (str[i] == to_find[i]) && (n - i))
				i++;
			if (!to_find[i])
				return ((char*)&*str);
		}
		n--;
		str++;
	}
	return (NULL);
}
