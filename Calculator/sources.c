/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sources.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 12:56:04 by drestles          #+#    #+#             */
/*   Updated: 2018/09/09 14:04:48 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int			ft_atoi(char *str, int i)
{
	int des;
	int n;

	des = 1;
	n = 0;
	while (str[i - 1] >= '0' && str[i - 1] <= '9')
	{
		n = (str[i] - '0') * des + n;
		i--;
		des = des * 10;
	}
	if (str[i] >= '0' && str[i] <= '9')
		n = (str[i] - '0') * des + n;
	return (n);
}

void		calc(t_int *stk_i, t_char *stk_c)
{
	int		a;
	int		b;
	char	op;

	a = stktop(stk_i);
	pop(stk_i);
	b = stktop(stk_i);
	pop(stk_i);
	op = stktop_c(stk_c);
	pop_c(stk_c);
	if (op == '/')
		push(stk_i, (b / a));
	else if (op == '*')
		push(stk_i, (b * a));
	else if (op == '+')
		push(stk_i, (b + a));
	else if (op == '-')
		push(stk_i, (b - a));
	else if (op == '%')
		push(stk_i, (b % a));
}
