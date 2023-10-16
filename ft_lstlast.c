  1 /* ************************************************************************** */
  2 /*                                                                            */
  3 /*                                                        :::      ::::::::   */
  4 /*   ft_lstlast.c                                       :+:      :+:    :+:   */
  5 /*                                                    +:+ +:+         +:+     */
  6 /*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
  7 /*                                                +#+#+#+#+#+   +#+           */
  8 /*   Created: 2023/10/16 15:54:53 by jagomez           #+#    #+#             */
  9 /*   Updated: 2023/10/16 15:54:53 by jagomez          ###   ########.fr       */
 10 /*                                                                            */
 11 /* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL)// Inicia un bucle que continúa mientras el puntero `lst` no apunte a `NULL`, es decir, mientras no se haya llegado al final de la lista.
	{
		if (lst->next == NULL)//Dentro del bucle, verifica si el siguiente nodo es `NULL`.
			return (lst);//Si es así, significa que el nodo actual (`lst`) es el último nodo de la lista. 
		lst = lst->next;// Avanza al siguiente nodo en la lista.
	}
	return (0);
}
