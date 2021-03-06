/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoch <gkoch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 04:13:36 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 17:59:35 by gkoch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if (size == (size_t)-1)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	ft_memset(str, 0, size + 1);
	return (str);
}
