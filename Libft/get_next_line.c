/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 20:45:32 by drestles          #+#    #+#             */
/*   Updated: 2018/11/28 00:24:07 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "./libft/includes/libft.h"

static char		*ft_strndup(const char *s1, size_t n)
{
	char	*str_copy;
	size_t	i;

	str_copy = (char *)malloc(n + 1);
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
		*str = ft_strnew(1);
	if (*str)
	{
		buffer[size] = '\0';
		temp = *str;
		*str = ft_strjoin(*str, buffer);
		free(temp);
	}
}

int				get_next_line(const int fd, char **line)
{
	static char	*lines[MAX_FD];
	char			buffer[BUFF_SIZE+1];
	int				len;
	int				size;

	if (fd < 0 || line == NULL || fd > MAX_FD || read(fd, buffer, 0) == -1)
		return (-1);
	while ((size = read(fd, buffer, BUFF_SIZE)) > 0)
		add_new_chars(&lines[fd], buffer, size);
	if (size == -1)
		return (-1);
	len = str_len(lines[fd]);
    if (*(lines[fd]) == '\0')
    {
        free(*line);
        return (0);
    }
    if (!(*line = ft_strndup(lines[fd], len)))
		return (-1);
	len++;
	lines[fd] += len;
	return (1);
}
