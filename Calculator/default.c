/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_digits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 12:34:19 by drestles          #+#    #+#             */
/*   Updated: 2018/09/09 13:08:12 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int num;

	num = nb;
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num > 9)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + 48);
}

int		count_chars(char *c)
{
	int n;

	n = 0;
	while (*c)
	{
		if (!(*c >= '0' && *c <= '9') && (*c != ' '))
			n++;
		c++;
	}
	return (n);
}

int		count_digits(char *c)
{
	int	n;

	n = 0;
	while (*c)
	{
		if (*c >= '0' && *c <= '9')
			n++;
		c++;
	}
	return (n);
}
