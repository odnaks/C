#include	"../../includes/ft.h"
#include	"../../libft/includes/libft.h"

int			clear_line(char ** matrix)
{
	int		y;
	int		x;

	y = 0;
	while (matrix[y])
	{
		if (challelemline(matrix[y], '.'))
		{
			free(matrix[y]);
			x = y + 1;
			while (matrix[x])
			{
				matrix[x - 1] = matrix[x];
				x++;
			}
			matrix[x - 1] = matrix[x];
			x++;
			continue ;
		}
		y++;
	}
	return (y);
}

int			clear_column(char ** matrix)
{
	int		n;
	int		y;
	int		x;

	n = 0;
	while (matrix[0][n])
	{
		if (challelemcolumn(matrix, n, '.'))
		{
			y = -1;
			while (matrix[++y])
			{
				x = n + 1;
				while (matrix[y][x])
				{
					matrix[y][x - 1] = matrix[y][x];
					x++;
				}
				matrix[y][x - 1] = matrix[y][x];
			}
			continue;
		}
		n++;
	}
	return (n);
}

static	int	countSharp(char **matrix)
{
	int		n;
	int		y;
	int		x;

	n = 0;
	y = -1;
	while (matrix[++y])
	{
		x = -1;
		while (matrix[y][++x])
			if (matrix[y][x] != '.')
				n++;
	}
	if (n != 4)
		ft_putendl("incorrect figure");
	return (n);
}

int			clear_matrix(char ** matrix)
{
	int		x;
	int		y;

	x = clear_line(matrix);
	y = clear_column(matrix);
	if (countSharp(matrix) != 4)
		return (0);
	if ((x * y) == 6)
		return (6);
	else if ((x * y) == 4)
		return (4);
	ft_putendl("incorrect figure");
	return (0);
}
