/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcazako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 13:07:51 by jcazako           #+#    #+#             */
/*   Updated: 2016/01/19 17:59:55 by jcazako          ###   ########.fr       */
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
	char	*str;
	int		nb_trio;
	t_tet	*list;
	int		size;
	char	**tab;

	str = gt_sample(av[1]);
	nb_trio = check_trio(str, 0);
	if (nb_trio == 0 || nb_trio > 26)
		puterror();
	list = init_list(str, nb_trio);	
	size = ft_sqrt(nb_trio * 4);
	tab = db_tabnew(size);
	while (!fillit(tab, list, size))
	{
		db_tabfree(&tab);
		size++;
		tab = db_tabnew(size);
	}
	end_fillit(&tab, &list, &str);
	return (0);
}
