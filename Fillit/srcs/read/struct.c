#include	"../../includes/ft.h"
#include	"../../libft/includes/libft.h"

t_tetris	*ft_create_elem(char **data)
{
	t_tetris	*new;

	if (!(new = (t_tetris*)malloc(sizeof(t_tetris))))
	{
		ft_putendl("Error malloc.");
		return (NULL);
	}
	new->piece = data;
	new->width = clear_column(data);
	new->heigth = clear_line(data);
	new->next = NULL;
	return (new);
}

int			ft_list_push_back(t_tetris **begin_list, t_tetris *data)
{
	t_tetris	*next;

	if (!data)
		return (1);
	next = *begin_list;
	if (next)
	{
		while (next->next)
			next = next->next;
		next->next = data;
	}
	else
		*begin_list = data;
	return (0);
}
