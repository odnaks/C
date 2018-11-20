/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 23:07:53 by drestles          #+#    #+#             */
/*   Updated: 2018/11/19 23:37:15 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_print_alphabet(void)
{
	char	*a;
	int		i;

	a = "abcdefghijklmnopqrstuvwxyz";
	i = 0;
	while (a[i])
	{
		ft_putchar(a[i]);
		i++;
	}
}
