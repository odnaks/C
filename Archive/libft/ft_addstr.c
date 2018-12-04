/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 02:58:53 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 14:44:28 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_addstr(const char *str)
{
	char	*answer;
	int		n;

	if (!str)
		return (NULL);
	answer = ft_strnew((size_t)ft_strlen(str));
	n = -1;
	while (str[++n])
		answer[n] = str[n];
	answer[n] = '\0';
	return (answer);
}
