/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:26:55 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/13 13:55:05 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)//verifica si el tamaño de dstsize es cero. 
//Si es así, entra en este bloque de código para calcular la longitud de la cadena de origen (src) y devuelve ese valor. 
	{
		while (src[i])
			i++;
		return (i);
	}
//Este bucle copia caracteres desde la cadena de origen (src) a la cadena de destino (dst). El bucle se detiene si se alcanza 
//el tamaño límite (dstsize - 1) o si se encuentra el carácter nulo en src.
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
//Si el índice i es menor que el tamaño límite, agrega un carácter nulo al final de la cadena de destino (dst). 
//Esto asegura que la cadena de destino esté correctamente terminada.
	if (i < dstsize)
		dst[i] = '\0';
//Después de salir del bucle anterior, este bucle calcula la longitud total de la cadena de origen (src) sin truncar, 
//ya que se ha llegado al límite del destino.
	while (src[i] != '\0')
		i++;
	return (i);
}
int main() {
    char destino[20];
    const char origen[] = "Hola, mundoooo";

    // Utiliza ft_strlcpy para copiar la cadena
    size_t longitud_copiada = ft_strlcpy(destino, origen, sizeof(destino));//sizeof se utiliza para especificar el tamaño del búfer de dst

    // Imprime la cadena copiada y su longitud
    printf("Cadena copiada: %s\n", destino);
    printf("Longitud de la cadena copiada: %zu\n", longitud_copiada);

    return 0;
}
