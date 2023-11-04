/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:14:09 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/29 15:30:46 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)//toma dos argumentos: count (número de elementos) y size (tamaño en bytes de cada elemento). 
{
	void	*result;

	result = (void *) malloc(count * size);//Utiliza malloc para asignar memoria para un bloque de tamaño count * size y almacena el puntero resultante en la variable result.
	if (!result)//Verifica si la asignación de memoria fue exitosa.
		return (NULL);//Si no lo fue (el puntero es NULL), la función devuelve NULL, indicando un fallo en la asignación de memoria.
	ft_bzero(result, count * size);// Utiliza ft_bzero para inicializar el contenido de la memoria asignada a cero. Aquí se asume que ft_bzero es una función que establece los primeros count * size bytes de la memoria en cero
	return (result);//Devuelve el puntero al bloque de memoria asignado, que ahora está inicializado a cero.
}
int main() {
    // Ejemplo de uso de ft_calloc
    int *array;

    // Asignar memoria para un array de 5 enteros
    array = (int *)ft_calloc(5, sizeof(int));

    if (array == NULL) {
        fprintf(stderr, "Error: No se pudo asignar memoria.\n");
        return 1;
    }

    // Imprimir los valores del array (deberían ser 0 ya que ft_calloc inicializa a cero)
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    // Liberar la memoria asignada
    free(array);

    return 0;
}
