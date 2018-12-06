/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:44:17 by drestles          #+#    #+#             */
/*   Updated: 2018/12/06 12:36:18 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
#include "../includes/libft.h"

void	ft_exit_program(t_tetris **lists)
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
		if (!get_next_line(fd, &((*arr)[n++])))
			ft_exit_program(lists);
	if (!ft_replace_and_check(&arr[0][0], a))
		ft_exit_program(lists);
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
	if (!ft_check_valid(arr, a))
		ft_exit_program(lists);
	*list = ft_create_elem(&arr);
	if (!ft_is_valid_w_h((*list)->width, (*list)->heigth))
		ft_exit_program(lists);
	return (n);
}

void	ft_create_tet(int fd, t_tetris **lists)
{
	char		a;
	t_tetris	*list;

	a = 'A';
	while (ft_getlist(fd, lists, &list, a++))
		ft_list_push_back(lists, list);
	ft_list_push_back(lists, list);
}

void	ft_read_file(char *str, t_tetris **lists)
{
	int			fd;

	fd = open(str, O_RDONLY);
	if (str[0] && fd > 0)
		ft_create_tet(fd, lists);
	else
		ft_putendl("error");
	close(fd);
}
