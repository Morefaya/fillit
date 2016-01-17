/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_place.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcazako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 18:07:52 by jcazako           #+#    #+#             */
/*   Updated: 2015/12/23 18:58:51 by jcazako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	check_range(char **tab, int rg_x, int rg_y, int size)
{
	if (rg_x < 0 || rg_x >= size)
		return (0);
	if (rg_y < 0 || rg_y >= size)
		return (0);
	if (tab[rg_y][rg_x] != '.')			
		return (0);
	return (1);
}

int			check_place(char **tab, t_tet *tet, t_pos i, int size)
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
				if (!check_range(tab, rg_x, rg_y, size))
					return (0);
			}
			j.x++;
		}
		j.y++;
	}
	return (1);
}
