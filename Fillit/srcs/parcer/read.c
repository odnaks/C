/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:44:17 by drestles          #+#    #+#             */
/*   Updated: 2018/12/05 13:16:04 by drestles         ###   ########.fr       */
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

int   replace_and_check(char **str, char rc)
{
    int     i;
	int 	j;
	int		c_dot;
	int		c_sh;

	c_sh = 0;
	c_dot = 0;
    i = -1;
	while (++i < 4)
	{
		if (!str[i])
			return (0);
		j = -1;
		while (++j < 4)
		{
			if (str[i][j] == '#' && (str[i][j] = rc))
				c_sh++;
			else if (str[i][j] == '.')
				c_dot++;
			else 
				return (0);
    	}
	}
	if (c_sh != 4 || c_dot != 12)
		return (0);
	return (1);
}

/*
считываем блок
*/
int		ft_getarr(int fd, char	***arr, t_tetris **lists, char a)
{
	int		flag;
	int		n;

	n = 0;
	*arr = (char **)malloc(sizeof(char *) * 5);
	while (n < 4)
		get_next_line(fd, &((*arr)[n++]));

	/*
			заменяем шарпы, чекаем на кол-во |
											 |
											 \/
	*/
	
	if (!replace_and_check(&arr[0][0], a))
			exit_program(lists);

	flag = get_next_line(fd, &((*arr)[n]));
	free((*arr)[n]);
	(*arr)[n] = NULL;
	return (flag);
}

int	is_valid_w_h(int x, int y)
{
	if ((x * y) != 4 && (x * y) != 6)
		return (0);
	return (1);
}

int	check_valid(char **matrix, int x, int y, char a)
{
	int	i;
	int	j;
	int flag;

	if ((x * y) != 4 && (x * y) != 6)
		return (0);
	i = 0;

	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if (matrix[i][j] == a)
			{
				flag = 0;
				if (i + 1 < y && matrix[i + 1][j] == a)
						flag = 1;
				else if (i - 1 >= 0 && matrix[i - 1][j] == a)
						flag = 1;
				else if (j + 1 < x && matrix[i][j + 1] == a)
						flag = 1;
				else if (j - 1 >= 0 && matrix[i][j - 1] == a)
						flag = 1;
				if (!flag)
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}


/*
	обробатываем блок	
*/
int		ft_getlist(int fd, t_tetris **lists, t_tetris **list, char a)
{
	char	**arr;
	int		n;

	arr = NULL;
	n = ft_getarr(fd, &arr, lists, a);
	*list = ft_create_elem(&arr);

	//нужно добавить чекр парвильных фигур и protekted везде с функцией отката
	if (!check_valid(((*list)->piece), (*list)->width, (*list)->heigth , a))
		exit_program(lists);
	if (!is_valid_w_h((*list)->width, (*list)->heigth))
		exit_program(lists);
	return (n);
}

/*
	начинаем читать по блоку
*/
void	create_tet(int fd, t_tetris **lists)
{
	char		a;
	t_tetris	*list;

	a = 'A';
	while (ft_getlist(fd, lists, &list, a++))
		ft_list_push_back(lists, list);
	
	ft_list_push_back(lists, list);
}

//открываем файл
void	read_file(char *str, t_tetris **lists)
{
	int			fd;

	fd = open(str, O_RDONLY);
	
	if (str[0] && fd > 0)
		create_tet(fd, lists);
	else
		ft_putendl("обломс");
	close(fd);
}
