/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcazako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 14:15:40 by jcazako           #+#    #+#             */
/*   Updated: 2016/01/19 18:01:55 by jcazako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_tet
{
	char		shp[5][5];
	char		ch;
	struct s_tet	*next;
}			t_tet;

typedef struct	s_pos
{
	int	x;
	int	y;
}		t_pos;

int	check_trio(char *str, int nb_trio);
char	*gt_sample(char *str);
t_tet	*tet_new(char a);
t_tet	*init_list(char *str, int nb_tet);
void	putlist(t_tet *tet);
t_tet	*add_tet_list(t_tet *tet);
void	add_tet_tab(char **tab, t_tet *list,  t_pos i);
void	check_first(t_tet *tet, t_pos *first);
int		check_place(char **tab, t_tet *tet, t_pos i, int size);
char	**db_tabnew(int size);
void	put_dbtab(char **tab);
void	del_tet_tab(char **tab, t_tet *tet, t_pos i);
int		fillit(char **tab, t_tet *tet, int size);
void	db_tabfree(char ***adr_tab);
void	end_fillit(char ***tab, t_tet **list, char **str);
void	lst_free(t_tet **list);

#endif
