/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 00:37:42 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/05 14:12:24 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fillit.h"
#include "../../includes/libft.h"

static int		challelemline(char *str, char c)
{
	while (*str)
	{
		if (*str != c)
			return (0);
		str++;
	}
	return (1);
}

static int		challelemcolumn(char **matrix, int n, char c)
{
	int		y;

	y = 0;
	while (matrix[y])
	{
		if (matrix[y][n] != c)
			return (0);
		y++;
	}
	return (1);
}

int				clear_line(char **matrix)
{
	int		y;
	int		x;

	y = 0;
	while (matrix[y])
	{
		if (challelemline(matrix[y], '.'))
		{
			free(matrix[y]);
			x = y + 1;
			while (matrix[x])
			{
				matrix[x - 1] = matrix[x];
				x++;
			}
			matrix[x - 1] = matrix[x];
			x++;
			continue ;
		}
		y++;
	}
	return (y);
}

int				clear_column(char **matrix)
{
	int		n;
	int		y;
	int		x;

	n = 0;
	while (matrix[0][n])
	{
		if (challelemcolumn(matrix, n, '.'))
		{
			y = -1;
			while (matrix[++y])
			{
				x = n + 1;
				while (matrix[y][x])
				{
					matrix[y][x - 1] = matrix[y][x];
					x++;
				}
				matrix[y][x - 1] = matrix[y][x];
			}
			continue;
		}
		n++;
	}
	return (n);
}
