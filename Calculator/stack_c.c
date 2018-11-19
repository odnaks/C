/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcollio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 12:39:34 by drestles          #+#    #+#             */
/*   Updated: 2018/09/09 14:04:25 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	init_c(t_char *stk)
{
	stk->top = 0;
}

void	push_c(t_char *stk, char f)
{
	stk->elem[stk->top] = f;
	stk->top++;
}

char	pop_c(t_char *stk)
{
	char	elem;

	if ((stk->top) >= 0)
	{
		stk->top--;
		elem = stk->elem[stk->top];
		return (elem);
	}
	else
		return (0);
}

char	stktop_c(t_char *stk)
{
	if ((stk->top) >= 0)
		return (stk->elem[stk->top - 1]);
	else
		return (0);
}

char	isempty_c(t_char *stk)
{
	if ((stk->top) == 0)
		return (1);
	else
		return (0);
}
