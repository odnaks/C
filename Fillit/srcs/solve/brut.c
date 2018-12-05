/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brut.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:38:46 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/05 14:18:28 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fillit.h"
#include "../../includes/libft.h"

static int		addpiece(char **map, char **matrix, int x, int y)
{
	int		my;
	int		mx;
	int		xx;

	my = 0;
	while (matrix[my])
	{
		mx = 0;
		xx = x;
		while (matrix[my][mx])
		{
			if ((matrix[my][mx] != '.') && (map[y][xx] == '.'))
				map[y][xx] = matrix[my][mx];
			else if ((matrix[my][mx] != '.') && (map[y][xx] != '.'))
				return (0);
			xx++;
			mx++;
		}
		y++;
		my++;
	}
	return (1);
}

static char		gchar(char **matrix)
{
	int		x;
	char	c;

	c = '.';
	x = 0;
	while (matrix[0][x])
	{
		if (matrix[0][x] != '.')
			return (matrix[0][x]);
		x++;
	}
	return (c);
}

static void		delpiece(char **map, char **matrix, int x, int y)
{
	int		my;
	int		mx;
	int		xx;
	char	c;

	c = gchar(matrix);
	my = 0;
	while (matrix[my])
	{
		xx = x;
		mx = 0;
		while (matrix[my][mx])
		{
			if (map[y][xx] == c)
				map[y][xx] = '.';
			xx++;
			mx++;
		}
		y++;
		my++;
	}
}

int				brut(char **map, t_tetris *tetris, int n)
{
	int	y;
	int	x;

	if (!tetris)
		return (1);
	y = 0;
	while (y < (n - tetris->heigth + 1))
	{
		x = 0;
		while (x < (n - tetris->width + 1))
		{
			if (addpiece(map, tetris->piece, x, y))
			{
				if (brut(map, tetris->next, n))
					return (1);
			}
			delpiece(map, tetris->piece, x, y);
			x++;
		}
		y++;
	}
	return (0);
}
