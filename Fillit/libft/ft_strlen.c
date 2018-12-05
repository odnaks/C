/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoch <gkoch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 04:05:36 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 17:59:13 by gkoch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

size_t		ft_strlen(const char *str)
{
	size_t		count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}
