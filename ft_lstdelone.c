 /* ************************************************************************** */
 /*                                                                            */
 /*                                                        :::      ::::::::   */
 /*   ft_lstdelone.c                                     :+:      :+:    :+:   */
 /*                                                    +:+ +:+         +:+     */
 /*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
 /*                                                +#+#+#+#+#+   +#+           */
 /*   Created: 2023/10/16 16:01:32 by jagomez           #+#    #+#             */
 /*   Updated: 2023/10/16 16:01:32 by jagomez          ###   ########.fr       */
 /*                                                                            */
 /* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)// Verifica si el nodo (`lst`) no es NULL antes de intentar eliminarlo. 
	{
    //Llama a la función `del` para liberar la memoria asociada al contenido del nodo (`lst->content`). 
    //La función `del` es un puntero a una función que se espera que realice la eliminación adecuada del contenido. 
    //Por ejemplo, podría ser una función que libera la memoria de un tipo de dato específico.
    del(lst->content);
		free(lst);// Libera la memoria del nodo (`lst`) en sí. Esto elimina el nodo de la lista.
	}
}
