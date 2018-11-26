/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:40:44 by drestles          #+#    #+#             */
/*   Updated: 2018/11/26 19:54:01 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <string.h>

# define BUFF_SIZE 32
# define MAX_FD 1000

int            get_next_line(const int fd, char **line);

typedef	struct	s_lines
{
	char	*read;
	char	*send;
}				t_lines;

#endif

