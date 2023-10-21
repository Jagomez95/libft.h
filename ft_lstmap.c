/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:29:10 by jagomez           #+#    #+#             */
/*   Updated: 2023/10/21 16:05:46 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	if (!f || !del)//verifica si alguno es nulo 
		return (NULL);
	first = NULL;//Este puntero se utilizará para apuntar al primer nodo de la nueva lista que se está construyendo.
	while (lst)//verifica que no sea nulo
	{
		new = ft_lstnew((*f)(lst->content));//Crea un nuevo nodo aplicando la función f al contenido del nodo actual de la lista original. Si la asignación falla, entra en el bloque condicional.
		if (!new)//Verifica si la asignación de new fue exitosa
		{
			//dentro del bloque condicional se encarga de liberar la memoria de todos los nodos ya asignados en la nueva lista (first), 
			//usando la función del para liberar el contenido de cada nodo.
			while (first)
			{
				new = first->next;
				(*del)(first->content);
				free(first);
				first = new;
			}
			lst = NULL;//para salir del bluce principal
			return (NULL);
		}
		//En resumen, estas dos líneas se utilizan para construir la nueva lista enlazada nodo por nodo. 
		//Después de crear el nuevo nodo (new) y agregarlo al final de la lista en construcción (first), el puntero lst se actualiza para apuntar al siguiente nodo en la lista original. 
		ft_lstadd_back(&first, new);//Esta función agrega el nodo new al final de la lista apuntada por first. Después de ejecutar esta línea, first apunta al inicio de la lista actualizada que incluye el nuevo nodo.
		lst = lst->next;
	}
	return (first);//que devuelve el puntero al primer nodo de la nueva lista.
