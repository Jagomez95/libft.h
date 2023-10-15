#include "libft.h"
// Esta línea define la función `ft_lstiter`. Toma dos argumentos: un puntero a la cabeza de la lista (`lst`) 
//y un puntero a una función (`f`) que toma un puntero `void *` como argumento. 
//La función `f` se utilizará para aplicar alguna operación a cada elemento de la lista.
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)// Inicia un bucle que se ejecuta mientras el puntero `lst` no sea `NULL`. Esto significa que continuará iterando mientras haya nodos en la lista.
	{
		f(lst->content);//Dentro del bucle, se llama a la función `f` y se le pasa el contenido del nodo actual (`lst->content`) como argumento. Esto permite aplicar alguna operación a cada elemento de la lista.
		lst = lst->next;// Después de aplicar la función al nodo actual, se avanza al siguiente nodo en la lista asignando
	}
}
