/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_i.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcollio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 12:39:34 by drestles          #+#    #+#             */
/*   Updated: 2018/09/09 14:03:44 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	init(t_int *stk)
{
	stk->top = 0;
}

void	push(t_int *stk, int f)
{
	stk->elem[stk->top] = f;
	stk->top++;
}

int		pop(t_int *stk)
{
	int	elem;

	if ((stk->top) >= 0)
	{
		stk->top--;
		elem = stk->elem[stk->top];
		return (elem);
	}
	else
		return (0);
}

int		stktop(t_int *stk)
{
	if ((stk->top) >= 0)
		return (stk->elem[stk->top - 1]);
	else
		return (0);
}

int		isempty(t_int *stk)
{
	if ((stk->top) == 0)
		return (1);
	else
		return (0);
}
