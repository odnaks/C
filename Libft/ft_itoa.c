/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 01:51:30 by drestles          #+#    #+#             */
/*   Updated: 2018/11/23 02:50:19 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		length;
	char	buff;

	i = 0;
	length = ft_strlen(str);
	while (length - 1 > i)
	{
		buff = str[i];
		str[i] = str[length - 1];
		str[length - 1] = buff;
		length--;
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*res;
	char	*save;
	int		neg;

	if ((res = (char *)malloc(sizeof(char) * 13)) == NULL)
		return (NULL);
	neg = 0;
	save = res;
	if (n == 0)
		return ((char *)"0");
	if (n == -2147483648)
		return (ft_strcpy(ft_strnew(12), "-2147483648"));
	if (n < 0 && (n = -n))
		neg = -1;
	while (n > 0)
	{
		*res++ = ((n % 10) + '0');
		n = n / 10;
	}
	if (neg)
		*res++ = '-';
	*res = '\0';
	res = ft_strrev(save);
	return (res);
}
