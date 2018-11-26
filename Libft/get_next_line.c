/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 20:45:32 by drestles          #+#    #+#             */
/*   Updated: 2018/11/26 21:53:39 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "./libft/libft.h"

static char    *ft_strndup(const char *s1, size_t n)
{
	char        *str_copy;
	size_t        i;
	
	str_copy = malloc(sizeof(*str_copy) * (n + 1));
	if (!str_copy)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		str_copy[i] = s1[i];
		i++;
	}
	str_copy[i] = '\0';
	return (str_copy);
}

static int		str_len(char *lines)
{
	int	i;

	i = 0;
	while (lines[i] != '\n' && lines[i] != '\0')
		i++;
	return (i);
}

static void		add_new_chars(char **str, char *buffer, int size)
{
	char *temp;

    if (!(*str))
        *str = (char*)malloc(sizeof(char));
	if (*str)
	{
		buffer[size] = '\0';
		temp = *str;
		*str = ft_strjoin(*str, buffer);
		free(temp);
	}
}

int		get_next_line(const int fd, char **line)
{
	static	t_lines lines[MAX_FD];
	char	buffer[BUFF_SIZE];
	int		len;
	int		size;

	if (fd < 0 || line == NULL || fd > MAX_FD || read(fd, buffer, 0) == -1)
		return (-1);
	while ((size = read(fd, buffer, BUFF_SIZE)))
	{
		add_new_chars(&lines[fd].read, buffer, size);
		lines[fd].send = lines[fd].read;
	}
	if (size == -1)
		return (-1);
	len = str_len(lines[fd].send);
	if (!(*line = ft_strndup(lines[fd].send, len)))
		return (-1);
	if (*(lines[fd].send) == '\0')
	{
		free(lines[fd].read);
		return (0);
	}
	len++;
	lines[fd].send += len;
	return (1);
}
