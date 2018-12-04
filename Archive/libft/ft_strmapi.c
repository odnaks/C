/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 04:11:06 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 14:45:27 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*answer;
	int		n;

	if ((s == NULL) || (f == NULL))
		return (NULL);
	if (!(answer = ft_strnew((size_t)(ft_strlen(s)))))
		return (NULL);
	n = 0;
	while (s[n])
	{
		answer[n] = f(n, s[n]);
		n++;
	}
	return (answer);
}
