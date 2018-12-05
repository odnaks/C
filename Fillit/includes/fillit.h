/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestles <drestles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 17:04:53 by gkoch             #+#    #+#             */
/*   Updated: 2018/12/05 10:55:39 by drestles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
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
int					get_next_line(const int fd, char **line);
void				read_file(char *str, t_tetris **lists);
t_tetris			*ft_create_elem(char ***data);
int					ft_list_push_back(t_tetris **begin_list, t_tetris *data);
int					challelemline(char	* str, char c);
int					challelemcolumn(char ** matrix, int n, char c);
int					clear_line(char ** matrix);
int					clear_column(char ** matrix);

void				exit_program(t_tetris **lists);
int  				replace_and_check(char **str, char rc);


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
