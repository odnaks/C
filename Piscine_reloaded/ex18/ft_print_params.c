/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 04:31:55 by drestles          #+#    #+#             */
/*   Updated: 2018/11/20 04:32:50 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_putstr(char *a)
{
	while (*a)
	{
		ft_putchar(*a);
		a++;
	}
}

int		main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = 1;
		while (argc > 1)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
			argc--;
		}
	}
	return (0);
}
