/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoch <gkoch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 04:01:24 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 17:57:49 by gkoch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strdup(const char *src)
{
	int		n;
	char	*strdup;

	n = 0;
	while (src[n])
		n++;
	if (!(strdup = ft_strnew((size_t)n)))
		return (NULL);
	n = -1;
	while (src[++n])
		strdup[n] = src[n];
	strdup[n] = '\0';
	return (strdup);
}
