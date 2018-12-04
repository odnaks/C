/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 04:18:16 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 14:45:43 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*answer;
	size_t	i;

	answer = ft_strnew(len);
	if ((s == NULL) || !answer)
		return (NULL);
	i = 0;
	while (s[start] && (i < len))
		answer[i++] = s[start++];
	answer[i] = 0;
	return (answer);
}