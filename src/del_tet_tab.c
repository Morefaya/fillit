#include "fillit.h"

char	**del_tet_tab(char **tab, t_tet *tet, t_pos i)
{
	t_pos	ft;
	t_pos	j;
	int	rg_x;
	int	rg_y;

	check_first(tet, &ft);
	j.y = 0;
	while (j.y < 4)
	{
		j.x = 0;
		while (j.x < 4)
		{
			rg_x = i.x + j.x - ft.x;
			rg_y = i.y + j.y - ft.y;
			if (tet->shp[j.y][j.x] == '#')
			{
				tab[rg_y][rg_x] = '.';
			}
			j.x++;
		}
		j.y++;
	}
	return (tab);
}
