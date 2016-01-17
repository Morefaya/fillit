/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_check_trio.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcazako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 18:03:09 by jcazako           #+#    #+#             */
/*   Updated: 2015/12/16 19:44:11 by jcazako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	char *str = gt_sample(av[1]);
	ft_putstr(str);
	ft_putnbr(check_trio(str, 0));
	ft_putchar('\n');
	return (0);
}
