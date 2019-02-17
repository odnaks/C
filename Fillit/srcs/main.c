/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:19:34 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/05 18:18:49 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
#include "../includes/libft.h"

void	ft_filit(char *str)
{
	t_tetris	*lists;

	lists = NULL;
	ft_read_file(str, &lists);
	ft_solve(lists);
}

int		main(int ac, char **av)
{
	int			n;

	n = 0;
	if (ac == 2)
		ft_filit(av[1]);
	else
		ft_putendl("Error");
	return (0);
}
