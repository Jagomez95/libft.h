#include "libft.a"

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;//Avanza al siguiente nodo en la lista.
    i++;
	}
	return (i);
}
