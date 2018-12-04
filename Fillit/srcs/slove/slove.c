#include	"../../includes/ft.h"
#include	"../../libft/includes/libft.h"

void		ft_tetdel(t_tetris ** alst)
{
	t_tetris	*tmp;
	t_tetris	*lst;

	lst = *alst;
	while (lst)
	{
		tmp = lst->next;
		clearMatrix(lst->piece);
		(void)lst->width;
		(void)lst->heigth;
		lst->next = NULL;
		free(lst);
		lst = NULL;
		lst = tmp;
	}
	*alst = NULL;
}

static void		ft_putmat(char ** matrix)
{
	int y = 0;

	while (matrix[y])
	{
		ft_putendl(matrix[y]);
		y++;
	}
}

void			solve(t_tetris *tetris)
{
	char	**	map;
	int			square;

	square = countsharp(tetris);
	square = sizesquare(square);
	map = createMatrix(square);
	while (!brut(map, tetris, square))
	{
		square++;
		clearMatrix(map);
		map = createMatrix(square);
	}
	ft_putmat(map);
	clearMatrix(map);
	ft_tetdel(&tetris);
}
