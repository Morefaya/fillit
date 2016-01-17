#include "fillit.h"

void	end_fillit(char ***tab, t_tet **list, char **str)
{
	put_dbtab(*tab);
	db_tabfree(tab);
	lst_free(list);
	ft_strdel(str);
}
