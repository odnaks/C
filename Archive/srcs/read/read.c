#include	"../../includes/ft.h"
#include	"../../libft/includes/libft.h"

static	char		**	get_matrix(char * str, int A)
{
	int		y;
	int		x;
	char	**matrix;
	
	if (!(matrix = (char **)malloc(sizeof(char *) * 5)))
		return (NULL);
	y = -1;
	while (++y < 4)
	{
		x = -1;
		if(!(matrix[y] = ft_strnew(5)))
			return (NULL);
		while (++x < 4)
			if (str[y * 5 + x] == '#')
				matrix[y][x] = A;
			else
				matrix[y][x] = '.';
		matrix[y][x] = '\0';
	}
	matrix[y] = NULL;
	y = -1;
	return (matrix);
}

int					chbegin(char *str)
{
	int	n;

	n = 0;
	if (str[0] != '\n')
	{
		ft_putendl("Incorrect placement.");
		return (1);
	}
	while (str[n])
	{
		str[n] = str[n + 1];
		n++;
	}
	return (0);
}

static	t_tetris	*	create_piece(char * str, int A, int n)
{
	t_tetris	*piece;
	char 		** matrix;

	if (n)
		if (chbegin(str))
			return (NULL);
	if (chcount_el(A))
		return (NULL);
	if (check_matrix(str))
		return (NULL);
	matrix = get_matrix(str, A++);
	if (!(clear_matrix(matrix)))
		return (NULL);
	if ((piece = ft_create_elem(matrix)))
		return (piece);
	return (NULL);
}

static	t_tetris	*	create_tet(int file)
{
	t_tetris	*tetris;
	char		* str;
	char		A;
	int			count;
	int			n;

	n = 0;
	tetris = NULL;
	A = 'A';
	str = ft_strnew(22);
	while ((count = read(file, str, 20 + n)))
	{
		if (ft_list_push_back(&tetris, create_piece(str, A++, n ? n: n++)))
		{
			ft_tetdel(&tetris);
			ft_strdel(&str);
			return (NULL);
		}
	}
	ft_strdel(&str);
	return (tetris);
}

t_tetris			*	read_file(char * str)
{
	int			file;
	t_tetris	*tetris;

	if (chformat(str))
		return (NULL);
	file = open(str, O_RDONLY);
	if (str[0] && file > 0)
	{
		if (!(tetris = create_tet(file)))
			return (NULL);
	}
	else
	{
		ft_putendl("Read error.");
		return (NULL);
	}
	close(file);
	return (tetris);
}
