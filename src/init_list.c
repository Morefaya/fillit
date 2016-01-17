/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcazako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 13:05:21 by jcazako           #+#    #+#             */
/*   Updated: 2015/12/23 17:30:23 by jcazako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	init_shape(t_tet *tet, char **str)
{
	t_pos	j;

	j.y = 0;
	while (j.y < 4)
	{
		j.x = 0;
		while (j.x < 4)
		{
			tet->shp[j.y][j.x] = **str;
			(*str)++;
			j.x++;
		}
		(*str)++;
		j.y++;
	}
}

t_tet		*init_list(char *str, int nb_tet)
{
	int		i;
	t_tet	*tet;
	t_tet	*first;

	if (!(tet = tet_new('A')))
		return (NULL);
	first = tet;
	i = 1;
	while (i < nb_tet)
	{
		add_tet_list(first);
		i++;
	}
	i = 0;
	while (i < nb_tet)
	{
		init_shape(tet, &str);
		str++;
		i++;
		tet = tet->next;
	}
	return (first);
}
