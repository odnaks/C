/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 04:38:17 by drestles          #+#    #+#             */
/*   Updated: 2018/11/20 05:14:38 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putstr(char *a)
{
	while (*a)
	{
		ft_putchar(*a);
		a++;
	}
}

void	ft_print_params(int argc, char **argv)
{
	int i;

	i = 1;
	while (argc > 1)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
		argc--;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*sl;

	i = 1;
	j = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			j = i + 1;
			while (j < argc)
			{
				if (ft_strcmp(argv[i], argv[j]) > 0)
				{
					sl = argv[i];
					argv[i] = argv[j];
					argv[j] = sl;
				}
				j++;
			}
			i++;
		}
		ft_print_params(argc, argv);
	}
}
