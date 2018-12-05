/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chclear.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoch <gkoch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 00:41:21 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/05 00:41:22 by gkoch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		challelemline(char	* str, char c)
{
	while (* str)
	{
		if (* str != c)
			return (0);
		str++;
	}
	return (1);
}

int		challelemcolumn(char ** matrix, int n, char c)
{
	int	y;

	y = 0;
	while (matrix[y])
	{
		if (matrix[y][n] != c)
			return (0);
		y++;
	}
	return (1);
}