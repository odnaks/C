/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evel.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcollio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 15:01:57 by drestles          #+#    #+#             */
/*   Updated: 2018/09/09 14:05:44 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	f_prioritet(t_int *stk_i, t_char *stk_c, char op)
{
	char s_op;

	s_op = stktop_c(stk_c);
	if (s_op == '(' || isempty_c(stk_c) == 1)
		push_c(stk_c, op);
	else
	{
		while (s_op == '+' || s_op == '-' || s_op == '*' || s_op == '/'
				|| s_op == '%')
		{
			calc(stk_i, stk_c);
			s_op = stktop_c(stk_c);
		}
		push_c(stk_c, op);
	}
}

void	s_prioritet(t_int *stk_i, t_char *stk_c, char op)
{
	char s_op;

	s_op = stktop_c(stk_c);
	if (s_op == '+' || s_op == '-' || s_op == '(' || isempty_c(stk_c) == 1)
		push_c(stk_c, op);
	else
	{
		while (s_op == '*' || s_op == '/' || s_op == '%')
		{
			calc(stk_i, stk_c);
			s_op = stktop_c(stk_c);
		}
		push_c(stk_c, op);
	}
}

void	brackets(t_int *stk_i, t_char *stk_c, char op)
{
	if (op == '(')
		push_c(stk_c, op);
	else
	{
		while (stktop_c(stk_c) != '(')
			calc(stk_i, stk_c);
		pop_c(stk_c);
	}
}

int		solve(char *str, t_int *stk_i, t_char *stk_c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			while (str[i + 1] >= '0' && str[i + 1] <= '9')
				i++;
			push(stk_i, ft_atoi(str, i));
		}
		else if (str[i] == '+' || str[i] == '-')
			f_prioritet(stk_i, stk_c, str[i]);
		else if (str[i] == '*' || str[i] == '/' || str[i] == '%')
			s_prioritet(stk_i, stk_c, str[i]);
		else if (str[i] == '(' || str[i] == ')')
			brackets(stk_i, stk_c, str[i]);
		i++;
	}
	while (isempty_c(stk_c) == 0)
		calc(stk_i, stk_c);
	return (stktop(stk_i));
}

int		eval_expr(char *str)
{
	t_int	*stk_i;
	t_char	*stk_c;

	stk_i = malloc(sizeof(t_int));
	stk_c = malloc(sizeof(t_char));
	init(stk_i);
	init_c(stk_c);
	return (solve(str, stk_i, stk_c));
}
