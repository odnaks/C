/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 17:04:53 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/05 14:20:18 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# define BUFF_SIZE 21

typedef	struct		s_tetris
{
	char			**piece;
	int				width;
	int				heigth;
	struct s_tetris	*next;
}					t_tetris;
/*
** -------------------------- Parcer --------------------------------
*/
int					clear_line(char **matrix);
int					clear_column(char **matrix);
void				exit_program(t_tetris **lists);
int					ft_getarr(int fd, char	***arr, t_tetris **lists, char a);
int					ft_getlist(int fd, t_tetris **lists,
t_tetris **list, char a);
void				create_tet(int fd, t_tetris **lists);
void				read_file(char *str, t_tetris **lists);
t_tetris			*ft_create_elem(char ***data);
int					ft_list_push_back(t_tetris **begin_list, t_tetris *data);
int					replace_and_check(char **str, char rc);
int					is_valid_w_h(int x, int y);
int					check_valid(char **matrix, int x, int y, char a);
/*
** -------------------------- Solve --------------------------------
*/
void				solve(t_tetris *tetris);
int					brut(char **map, t_tetris *tetris, int n);
void				ft_tetdel(t_tetris **alst);
int					countsharp(t_tetris **tetris);
int					sizesquare(int n);
char				**create_mrx(int size);
void				clear_mrx(char **matrix);

#endif
