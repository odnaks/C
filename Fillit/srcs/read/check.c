#include	"../../includes/ft.h"
#include	"../../libft/includes/libft.h"

int				chcount_el(char A)
{
	if (A <= 'Z')
		return (0);
	ft_putendl("A large number of figures");
	return (1);
}

int				chchar(char c)
{
	if ((c == '.') || (c == '#'))
		return (0);
	ft_putendl("Invalid character.");
	return (1);
}

int				check_matrix(char * str)
{
	int		y;
	int		x;

	y = -1;
	while (++y < 4)
	{
		x = -1;
		while (++x < 4)
			if (chchar(str[y * 5 + x]))
				return (1);
		if (str[y * 5 + x] != '\n')
		{
			ft_putendl("The line ends incorrectly.");
			return (1);
		}
	}
	return (0);
}

static int		chchname(char * str)
{
	int		n;

	n = 0;
	while (str[n])
	{
		if (!ft_isprint(str[n]))
			return (0);
		n++;
	}
	return (n);
}

int		chformat(char * str)
{
	int		n;
	int		i;
	char	*filit;

	filit = ".fillit";

	if(!(n = chchname(str) - 7))
	{
		ft_putendl("Invalid characters in argument!");
		return(1);
	}
	i = 0;
	while (str[n])
		if (str[n++] != filit[i] || !filit[i++])
		{
			ft_putendl("Not valid format!");
			return(1);
		}
	return (0);
}
