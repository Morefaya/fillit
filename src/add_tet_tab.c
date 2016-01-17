/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_tet_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcazako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 17:37:16 by jcazako           #+#    #+#             */
/*   Updated: 2015/12/23 18:44:22 by jcazako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**add_tet_tab(char **tab, t_tet *tet, t_pos i)
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
			if (tet->shp[j.y][j.x] == '#')
			{
				rg_x = i.x + j.x - ft.x;
				rg_y = i.y + j.y - ft.y;
				tab[rg_y][rg_x] = tet->ch;
			}
			j.x++;
		}
		j.y++;
	}
	return (tab);
}
