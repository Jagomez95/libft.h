#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
  // Establece el puntero 'next' del nuevo nodo al primer nodo actual de la lista
	new->next = *lst;
  // Actualiza el puntero de la lista para que apunte al nuevo nodo (que ahora es el primero)
	*lst = new;
}
