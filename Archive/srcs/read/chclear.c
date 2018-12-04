#include	"../../includes/ft.h"
#include	"../../libft/includes/libft.h"

int		challelemline(char	* str, char c)
{
	while (* str)
	{
		if (* str != c)
			return (0);
		str++;
	}
	return (1);
}

int		challelemcolumn(char ** matrix, int n, char c)
{
	int	y;

	y = 0;
	while (matrix[y])
	{
		if (matrix[y][n] != c)
			return (0);
		y++;
	}
	return (1);
}
