/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoch <gkoch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:19:34 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/05 03:46:31 by gkoch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
#include "../includes/libft.h"

// static void		ft_putmat(char ** matrix)
// {
// 	int y = 0;

// 	while (matrix[y])
// 	{
// 		ft_putendl(matrix[y]);
// 		y++;
// 	}
// }

// void	ft_putlists(t_tetris **lists)
// {
// 	t_tetris *list = *lists;
// 	while (list)
// 	{
// 		ft_putmat(list->piece);
// 		list = list->next;
// 	}
// }

void	ft_filit(char *str)
{
	t_tetris	*lists;

    lists = NULL;
	read_file(str, &lists);
	solve(lists);
}

int		main(int ac, char **av)
{
	int		n;

	n = 0;
	if (ac > 1)
		while (++n < ac)
			ft_filit(av[n]);
	else
		ft_putendl("Error");
	return (0);
}
