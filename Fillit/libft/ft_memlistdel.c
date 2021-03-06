/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memlistdel.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoch <gkoch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 03:20:17 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/03 17:56:58 by gkoch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_memlistdel(void *ap, size_t ap_size)
{
	if (ap)
	{
		free(ap);
		ap = NULL;
	}
	(void)ap_size;
}
