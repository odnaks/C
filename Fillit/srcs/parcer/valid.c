/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 13:38:01 by drestles          #+#    #+#             */
/*   Updated: 2018/12/05 14:15:51 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fillit.h"
#include "../../includes/libft.h"

static int	count_sh_dot(int sh, int dot)
{
	if (sh != 4 || dot != 12)
		return (0);
	return (1);
}

int			replace_and_check(char **str, char rc)
{
	int		i;
	int		j;
	int		c_dot;
	int		c_sh;

	c_sh = 0;
	c_dot = 0;
	i = -1;
	while (++i < 4)
	{
		if (!str[i])
			return (0);
		j = -1;
		while (++j < 4)
		{
			if (str[i][j] == '#' && (str[i][j] = rc))
				c_sh++;
			else if (str[i][j] == '.')
				c_dot++;
			else
				return (0);
		}
	}
	return (count_sh_dot(c_sh, c_dot));
}

int			is_valid_w_h(int x, int y)
{
	if ((x * y) != 4 && (x * y) != 6)
		return (0);
	return (1);
}

int			check_valid(char **matrix, int x, int y, char a)
{
	int		i;
	int		j;
	int		flag;

	i = -1;
	while (++i < y)
	{
		j = -1;
		while (++j < x)
		{
			if (matrix[i][j] == a)
			{
				flag = 0;
				if ((i + 1 < y && matrix[i + 1][j] == a)
				|| (i - 1 >= 0 && matrix[i - 1][j] == a))
					flag = 1;
				else if ((j + 1 < x && matrix[i][j + 1] == a)
				|| (j - 1 >= 0 && matrix[i][j - 1] == a))
					flag = 1;
				if (!flag)
					return (0);
			}
		}
	}
	return (1);
}
