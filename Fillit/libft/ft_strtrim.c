/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 04:19:18 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 14:45:44 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

static int	ft_getitem(const char *s)
{
	int		item;

	item = 0;
	while ((s[item] == 32) ||
		(s[item] == 9) ||
		(s[item] == 10))
		item++;
	return (item);
}

static int	ft_getitemend(const char *s)
{
	int		item;

	item = ft_strlen(s) - 1;
	while ((s[item] == 32) ||
		(s[item] == 9) ||
		(s[item] == 10))
		item--;
	return (item);
}

char		*ft_strtrim(char const *s)
{
	char	*answer;
	int		start;
	int		end;
	int		n;

	if (!s)
		return (NULL);
	start = ft_getitem(s);
	end = ft_getitemend(s);
	if ((end - start) < 0)
		start = 0;
	answer = ft_strnew((size_t)(end - start + 1));
	if (!answer)
		return (NULL);
	n = 0;
	while (start <= end)
		answer[n++] = (char)s[start++];
	answer[n] = '\0';
	return (answer);
}