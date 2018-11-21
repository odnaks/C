/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 21:19:43 by drestles          #+#    #+#             */
/*   Updated: 2018/11/21 16:01:46 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	text_out(char *filename)
{
	int		file;
	char	c;

	file = open(filename, O_RDONLY);
	if (file < 0)
		return ;
	while (read(file, &c, 1))
		write(1, &c, 1);
	close(file);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		text_out(argv[1]);
	return (0);
}
