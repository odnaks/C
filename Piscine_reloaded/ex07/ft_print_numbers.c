/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 23:22:54 by drestles          #+#    #+#             */
/*   Updated: 2018/11/19 23:36:28 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_print_numbers(void)
{
	char	*a;
	int		i;

	a = "0123456789";
	i = 0;
	while (a[i])
	{
		ft_putchar(a[i]);
		i++;
	}
}
