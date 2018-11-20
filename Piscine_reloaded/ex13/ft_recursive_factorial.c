/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 01:26:35 by drestles          #+#    #+#             */
/*   Updated: 2018/11/20 03:31:29 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fac;

	fac = 1;
	if (nb >= 0 && nb <= 12)
	{
		if (nb == 0)
			return (1);
		fac *= nb;
		return (fac * ft_recursive_factorial(nb - 1));
	}
	return (0);
}
