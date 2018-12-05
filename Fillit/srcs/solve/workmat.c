/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   workmat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoch <gkoch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:40:19 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/05 03:50:56 by gkoch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fillit.h"
#include "../../includes/libft.h"

int			countsharp(t_tetris **tetris)
{
	int			n;
	t_tetris	*list;

	n = 4;
	list = *tetris;
	while (list->next)
	{
		n += 4;
		list = list->next;
	}
	return (n);
}

int			sizesquare(int n)
{
	int		answer;

	answer = 2;
	while((answer * answer) < n)
		answer++;
	return (answer);
}

char		**create_mrx(int size)
{
	char	**matrix;
	int		y;
	int		x;

	matrix = (char **)malloc(sizeof(char *) * (size + 1));
	y = 0;
	while (y < size)
	{
		matrix[y] = (char *)malloc(sizeof(char) * (size + 1));
		x = 0;
		while (x < size)
		{
			matrix[y][x] = '.';
			x++;
		}
		matrix[y][x] = '\0';
		y++;
	}
	matrix[y] = NULL;
	return (matrix);
}

void		clear_mrx(char **matrix)
{
	int	n;

	n = 0;
	while (matrix[n])
	{
		free(matrix[n]);
		n++;
	}
	free(matrix);
	matrix = NULL;
}
