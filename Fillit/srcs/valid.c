/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 13:38:01 by drestles          #+#    #+#             */
/*   Updated: 2018/12/05 19:20:21 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
#include "../includes/libft.h"

static int	ft_count_sh_dot(int sh, int dot)
{
	if (sh != 4 || dot != 12)
		return (0);
	return (1);
}

int			ft_replace_and_check(char **str, char rc)
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
		if ((!str[i + 1] && i + 1 < 4) || ft_strlen(str[i]) != 4)
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
	return (ft_count_sh_dot(c_sh, c_dot));
}

int			ft_is_valid_w_h(int x, int y)
{
	if ((x * y) != 4 && (x * y) != 6)
		return (0);
	return (1);
}

static int	ft_alpha_and_flag(char a, int flag)
{
	if (a > 'Z')
		return (0);
	if (flag != 6 && flag != 8)
		return (0);
	return (1);
}

int			ft_check_valid(char **matrix, char a)
{
	int		i;
	int		j;
	int		flag;

	flag = 0;
	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (matrix[i][j] == a)
			{
				if (i + 1 < 4 && matrix[i + 1][j] == a)
					flag++;
				if (i - 1 >= 0 && matrix[i - 1][j] == a)
					flag++;
				if (j + 1 < 4 && matrix[i][j + 1] == a)
					flag++;
				if (j - 1 >= 0 && matrix[i][j - 1] == a)
					flag++;
			}
		}
	}
	return (ft_alpha_and_flag(a, flag));
}
