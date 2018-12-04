#include	"../includes/ft.h"
#include	"../libft/includes/libft.h"

void	filit(char * str)
{
	t_tetris	*tetris;

	if (!(tetris = read_file(str)))
		return ;
	solve(tetris);
}

int		main(int ac, char **av)
{
	int		n;

	n = 0;
	if (ac > 1)
		while (++n < ac)
			filit(av[n]);
	else
		ft_putendl("There is no argument.");
	return (0);
}
