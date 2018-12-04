#ifndef		FT_H
# define	FT_H

# define	BUF_SIZE (1)

#include	<unistd.h>
# include	<fcntl.h>
# include	<stdio.h>
# include	<errno.h>

typedef	struct			s_tetris
{
	char				**	piece;
	int						width;
	int						heigth;
	struct	s_tetris	*	next;
}							t_tetris;

t_tetris		*	read_file(char * str);

t_tetris		*	ft_create_elem(char **data);
int					ft_list_push_back(t_tetris **begin_list, t_tetris *data);

int					clear_matrix(char ** matrix);

int					chchar(char c);
int					check_matrix(char * str);
int					chformat(char * str);
int					chcount_el(char A);

int					challelemline(char * str, char c);
int					challelemcolumn(char ** matrix, int n, char c);
int					clear_line(char ** matrix);
int					clear_column(char ** matrix);

void				solve(t_tetris *tetris);
int					brut(char ** map, t_tetris *tetris, int n);

int					countsharp(t_tetris *tetris);
int					sizesquare(int n);
char			**	createMatrix(int size);
void				clearMatrix(char ** matrix);
void				ft_tetdel(t_tetris ** alst);

#endif
