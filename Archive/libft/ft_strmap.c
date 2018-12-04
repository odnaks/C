/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 04:08:38 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 14:45:26 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*answer;
	int		n;

	if ((s == NULL) || (f == NULL))
		return (NULL);
	answer = ft_strnew((size_t)(ft_strlen(s)));
	if (!answer)
		return (NULL);
	n = 0;
	while (s[n])
	{
		answer[n] = (char)f(s[n]);
		n++;
	}
	return (answer);
}
