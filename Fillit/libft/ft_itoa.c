/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 03:02:38 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 14:44:36 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

static int	ft_lengthint(int n)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	if (i == 0)
		i++;
	return (i);
}

char		*ft_itoa(int n)
{
	char	*answer;
	int		flag;
	int		i;

	if (!(answer = ft_strnew(ft_lengthint(n))))
		return (NULL);
	i = 0;
	flag = 1;
	if (n < 0)
		flag = -1;
	while ((n / 10) != 0)
	{
		answer[i] = n % 10 * flag + 48;
		n /= 10;
		i++;
	}
	answer[i++] = n * flag + 48;
	if (flag == -1)
		answer[i++] = '-';
	answer[i] = '\0';
	ft_strrev(answer);
	return (answer);
}
