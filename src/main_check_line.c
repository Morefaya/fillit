/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_check_line.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcazako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 14:04:10 by jcazako           #+#    #+#             */
/*   Updated: 2015/12/10 15:51:16 by jcazako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(void)
{
	char	s[] = "\n\n\n\n\n";
	size_t	len = ft_strlen(s);
	char	*str = ft_strnew(len);
	ft_strncpy(str, s, len);
	ft_putnbr(check_line(&str));
	ft_putchar('\n');
	return (0);
}
