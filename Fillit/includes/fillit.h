/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 17:04:53 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/05 18:47:50 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

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
int					ft_clear_line(char **matrix);
int					ft_clear_column(char **matrix);
void				ft_exit_program(t_tetris **lists);
int					ft_getarr(int fd, char	***arr, t_tetris **lists, char a);
int					ft_getlist(int fd, t_tetris **lists,
t_tetris **list, char a);
void				ft_create_tet(int fd, t_tetris **lists);
void				ft_read_file(char *str, t_tetris **lists);
t_tetris			*ft_create_elem(char ***data);
int					ft_list_push_back(t_tetris **begin_list, t_tetris *data);
int					ft_replace_and_check(char **str, char rc);
int					ft_is_valid_w_h(int x, int y);
int					ft_check_valid(char **matrix, char a);
/*
** -------------------------- Solve --------------------------------
*/
void				ft_solve(t_tetris *tetris);
int					ft_brut(char **map, t_tetris *tetris, int n);
void				ft_tetdel(t_tetris **alst);
int					ft_countsharp(t_tetris **tetris);
int					ft_sizesquare(int n);
char				**ft_create_mrx(int size);
void				ft_clear_mrx(char **matrix);

#endif
