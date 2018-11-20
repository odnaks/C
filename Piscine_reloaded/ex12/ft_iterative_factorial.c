/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 01:24:26 by drestles          #+#    #+#             */
/*   Updated: 2018/11/20 03:31:00 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;
	int	i;

	if (nb >= 0 && nb <= 12)
	{
		fac = 1;
		i = 1;
		while (i <= nb)
		{
			fac = fac * i;
			i++;
		}
		return (fac);
	}
	return (0);
}
