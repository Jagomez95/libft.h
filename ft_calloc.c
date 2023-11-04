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
    int *array;
    size_t size = 5;

    while (size <= 20) {
        // Asignar memoria para un array de enteros
        array = (int *)ft_calloc(size, sizeof(int));

        if (array == NULL) {
            fprintf(stderr, "Error: No se pudo asignar memoria para el tamaño %zu.\n", size);
            return 1;
        }

        // Imprimir el tamaño y los valores del array (deberían ser 0)
        size_t i = 0;
        while (i < size) {
            printf("%d ", array[i]);
            i++;
        }

        // Nueva línea para separar los resultados de diferentes tamaños
        printf("\n\n");

        // Liberar la memoria asignada
        free(array);

        // Incrementar el tamaño para la próxima iteración
        size += 5;
    }

    return 0;
}
