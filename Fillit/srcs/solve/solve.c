/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:39:53 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/05 14:17:27 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fillit.h"
#include "../../includes/libft.h"

void			ft_tetdel(t_tetris **alst)
{
	t_tetris	*tmp;
	t_tetris	*lst;

	lst = *alst;
	while (lst)
	{
		tmp = lst->next;
		clear_mrx(lst->piece);
		(void)lst->width;
		(void)lst->heigth;
		lst->next = NULL;
		free(lst);
		lst = NULL;
		lst = tmp;
	}
	*alst = NULL;
}

static void		ft_putmat(char **matrix)
{
	int y;

	y = 0;
	while (matrix[y])
	{
		ft_putendl(matrix[y]);
		y++;
	}
}

void			solve(t_tetris *tetris)
{
	char	**map;
	int		square;

	square = countsharp(&tetris);
	square = sizesquare(square);
	map = create_mrx(square);
	while (!brut(map, tetris, square))
	{
		square++;
		clear_mrx(map);
		map = create_mrx(square);
	}
	ft_putmat(map);
	clear_mrx(map);
	ft_tetdel(&tetris);
}
