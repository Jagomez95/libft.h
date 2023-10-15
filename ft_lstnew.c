#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *rtn;//declara un puntero a una estructura de tipo `t_list` que se utilizará para almacenar la dirección del nuevo nodo.
  
    rtn = (t_list *)malloc(sizeof(t_list));//asigna dinámicamente memoria para un nuevo nodo de la lista. `sizeof(t_list)` da el tamaño necesario para almacenar la estructura `t_list`.

    if (!rtn)// verifica si la asignación de memoria fue exitosa
        return (NULL);
  rtn->content = content;//asigna el puntero `content` del nuevo nodo con el contenido proporcionado como parámetro.
  rtn->next = NULL;// establece el puntero `next` del nuevo nodo como NULL, indicando que este nodo es actualmente el último de la lista y no tiene un nodo siguiente.
  return (rtn);// devuelve un puntero al nodo recién creado.
}
/*Esta función toma un puntero a un nodo de tipo t_list como parámetro e imprime el contenido de cada nodo de la lista.
void printlist(t_list *lista)
{   
    // Itera a través de la lista mientras no se llegue al final (NULL)
    while (lista != NULL)
    {
        // Imprime el contenido del nodo actual
        printf("%c\n", lista->content);

        // Avanza al siguiente nodo en la lista
        lista = lista->next;
    }
}
 int main(int ac, char **av)
 {
 	t_list *lista;//Declara un puntero `lista` para el inicio de la lista
 	t_list *tmp;//un puntero temporal `tmp` para manipular la lista
 	int    i;//para controlar el bucle.

 	i = 2;
 	lista = ft_lstnew(av[1][0]);//Crea el primer nodo de la lista utilizando la función `ft_lstnew` con el primer carácter de `av[1]`
 	tmp = lista;//asigna su dirección tanto a `lista` como a `tmp`.
 	while (i < ac)// Inicia un bucle que recorre los elementos de `av` a partir del segundo (`av[2]` en adelante).
 	{
 		tmp->next = ft_lstnew(av[i][0]);//Crea un nuevo nodo con el carácter correspondiente de `av[i]` y asigna su dirección al puntero `next` del nodo actual (`tmp`).
 		tmp = tmp->next;//Avanza `tmp` al nuevo nodo creado para que la próxima iteración trabaje con este nuevo nodo.
 		i++;
 	}

 	printlist(lista);//Llama a la función `printlist` para imprimir los contenidos de la lista.
}*/
