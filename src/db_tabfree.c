#include "fillit.h"

void	db_tabfree(char ***adr_t)
{
	int	i;

	i = 0;
	while (**adr_t)
	{
		ft_strdel(*adr_t);
		(*adr_t)++;
	}
	*adr_t = NULL;
}
