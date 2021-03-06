/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoch <gkoch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 04:15:48 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 17:59:53 by gkoch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_strrev(char *s)
{
	int		i;
	int		j;
	char	item;

	if (!s)
		return ;
	i = 0;
	j = ft_strlen(s) - 1;
	while ((j - i) > 0)
	{
		item = s[i];
		s[i] = s[j];
		s[j] = item;
		i++;
		j--;
	}
}
