/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcazako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 13:07:51 by jcazako           #+#    #+#             */
/*   Updated: 2015/12/23 17:34:00 by jcazako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	puterror(void)
{
	ft_putendl("error");
	exit(1);
}

int		main(int ac, char **av)
{
	if (ac != 2)
		puterror();
	char *str = gt_sample(av[1]);
	int nb_trio = check_trio(str, 0);
	t_tet *list = init_list(str, nb_trio);	
	int size = ft_sqrt(nb_trio * 4);
	char **tab = db_tabnew(size);
	while (!fillit(tab, list, size))
	{
		db_tabfree(&tab);
		size++;
		tab = db_tabnew(size);
	}
	put_dbtab(tab);
	
	return (0);
}
