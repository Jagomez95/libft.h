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
	size_t	len;

	len = 0;
	if (src != NULL) //verifica si la cadena origen no es nula
	{
		len = ft_strlen(src);//obtiene la longitud de la cadena origen utilizando la funcion strlen
		if (dst != NULL && dstsize != 0)//verifica que dst sea nulo y dstsize no sea 0
		{
			i = 0;
			while ((i < len) && i < (dstsize - 1))//copia desde la cadena de origen hasta destino
			{
				dst[i] = src[i];//copia un caracter de la cadena origen hasta dst
				i++;//incrementa
			}
			dst[i] = '\0';//asegura que la cadena de destino este terminada con el carácter nulo
		}
	}
	return (len);
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
