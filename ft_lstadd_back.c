#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	last = ft_lstlast(*lst);//Obtén un puntero al último nodo de la lista llamando a la función `ft_lstlast` con la lista actual (`*lst`).
	if (last)// Verifica si hay un último nodo 
		last->next = new;//Si existe, actualiza el puntero `next` del último nodo para que apunte al nuevo nodo (`new`). Esto agrega el nuevo nodo al final de la lista.
	else
		*lst = new;// asigna el nuevo nodo (`new`) al puntero `lst`. Esto significa que el nuevo nodo se convierte en el primer nodo de la lista.
}
