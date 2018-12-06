/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   workmat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:40:19 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/05 18:18:42 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
#include "../includes/libft.h"

int			ft_countsharp(t_tetris **tetris)
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

int			ft_sizesquare(int n)
{
	int		answer;

	answer = 2;
	while ((answer * answer) < n)
		answer++;
	return (answer);
}

char		**ft_create_mrx(int size)
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

void		ft_clear_mrx(char **matrix)
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
