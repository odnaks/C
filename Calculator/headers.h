/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 13:01:39 by drestles          #+#    #+#             */
/*   Updated: 2018/09/09 14:01:09 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H

# define HEADERS_H

# include <stdlib.h>
# include <unistd.h>

# define NMAX 50

typedef	struct	s_int
{
	int			elem[NMAX];
	int			top;
}				t_int;

typedef	struct	s_char
{
	char		elem[NMAX];
	int			top;
}				t_char;

void			ft_putchar(char c);
void			ft_putnbr(int n);
int				count_digits(char *str);
int				count_chars(char *c);
void			init(t_int *stk);
void			push(t_int *stk, int f);
int				pop(t_int *stk);
int				stktop(t_int *stk);
int				isempty(t_int *stk);
void			init_c(t_char *stk);
void			push_c(t_char *stk, char f);
char			pop_c(t_char *stk);
char			stktop_c(t_char *stk);
char			isempty_c(t_char *stk);
int				ft_atoi(char *str, int i);
void			calc(t_int *stk_i, t_char *stk_c);
void			f_prioritet(t_int *stk_i, t_char *stk_c, char op);
void			s_prioritet(t_int *stk_i, t_char *stk_c, char op);
void			brackets(t_int *stk_i, t_char *stk_c, char op);
int				solve(char *str, t_int *stk_i, t_char *stk_c);
int				eval_expr(char *str);

#endif
