/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:44:17 by drestles          #+#    #+#             */
/*   Updated: 2018/12/05 14:13:34 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fillit.h"
#include "../../includes/libft.h"

void	exit_program(t_tetris **lists)
{
	ft_tetdel(lists);
	ft_putendl("error");
	exit(0);
}

int		ft_getarr(int fd, char ***arr, t_tetris **lists, char a)
{
	int			flag;
	int			n;

	n = 0;
	*arr = (char **)malloc(sizeof(char *) * 5);
	while (n < 4)
		get_next_line(fd, &((*arr)[n++]));
	if (!replace_and_check(&arr[0][0], a))
		exit_program(lists);
	flag = get_next_line(fd, &((*arr)[n]));
	(*arr)[n] = NULL;
	return (flag);
}

int		ft_getlist(int fd, t_tetris **lists, t_tetris **list, char a)
{
	char		**arr;
	int			n;

	arr = NULL;
	n = ft_getarr(fd, &arr, lists, a);
	*list = ft_create_elem(&arr);
	if (!check_valid(((*list)->piece), (*list)->width, (*list)->heigth, a))
		exit_program(lists);
	if (!is_valid_w_h((*list)->width, (*list)->heigth))
		exit_program(lists);
	return (n);
}

void	create_tet(int fd, t_tetris **lists)
{
	char		a;
	t_tetris	*list;

	a = 'A';
	while (ft_getlist(fd, lists, &list, a++))
		ft_list_push_back(lists, list);
	ft_list_push_back(lists, list);
}

void	read_file(char *str, t_tetris **lists)
{
	int			fd;

	fd = open(str, O_RDONLY);
	if (str[0] && fd > 0)
		create_tet(fd, lists);
	else
		ft_putendl("error");
	close(fd);
}
