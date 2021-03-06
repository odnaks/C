/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 03:08:01 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/05 14:25:07 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_replace_char(char **str, char c, char rc)
{
	int	n;

	n = 0;
	while ((*str)[n])
	{
		if ((*str)[n] == c)
			(*str)[n] = rc;
		n++;
	}
}
