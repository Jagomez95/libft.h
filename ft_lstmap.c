#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *gon;
	t_list *aux;
	t_list *auxgon;

	aux = lst;// Inicializa un puntero auxiliar (`aux`) apuntando a la cabeza de la lista original (`lst`).
	if (!(gon = malloc(sizeof(t_list))))// Intenta asignar memoria para el primer nodo de la nueva lista (`gon`). 
		return (0);
	auxgon = gon;//Inicializa un puntero auxiliar (`auxgon`) para la nueva lista y lo apunta al primer nodo.
	while (aux)//Inicia un bucle que se ejecuta mientras haya nodos en la lista original.
	{
		auxgon->content = f(aux->content);//Aplica la función `f` al contenido del nodo actual (`aux->content`) y asigna el resultado al contenido del nuevo nodo (`auxgon->content`).
		if (!(auxgon->next = malloc(sizeof(t_list))))//Intenta asignar memoria para el siguiente nodo en la nueva lista.
			ft_lstclear(&aux, del);// Si hay un fallo, limpia la memoria asignada hasta ese momento utilizando `ft_lstclear`
		aux = aux->next;// Avanza al siguiente nodo en ambas listas.
		auxgon = auxgon->next;// Avanza al siguiente nodo en ambas listas.
	}
	return (gon);// Al final de la función, la cabeza de la nueva lista se encuentra en `gon`.
}
