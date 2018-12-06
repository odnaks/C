/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoch <gkoch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 03:28:57 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 17:57:04 by gkoch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memset(void *s, int c, size_t count)
{
	char	*str;

	if (count)
	{
		str = (char *)s;
		while (count--)
			*str++ = c;
	}
	return (s);
}
