#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *gon;
	t_list *aux;

	if (!(aux = *lst))// Verifica si el puntero a la lista (`lst`) o el contenido de la lista son NULL.
		return ;//Si alguno de ellos es NULL, la función sale inmediatamente, ya que no hay nada que liberar.
	while (aux)//Inicia un bucle que continúa mientras el puntero `aux` no apunte a NULL, es decir, mientras haya nodos en la lista.
	{
		gon = aux->next;//Guarda una referencia al próximo nodo antes de liberar el nodo actual.
		del(aux->content);// Llama a la función `del` para liberar la memoria del contenido del nodo actual.
		free(aux);//Libera la memoria del nodo actual.
		aux = gon;//Avanza al siguiente nodo.
	}
	*lst = NULL;//Después de que se han eliminado todos los nodos de la lista, establece el puntero de la lista en NULL.
}
