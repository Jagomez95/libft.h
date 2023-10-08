/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:12:28 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/19 16:53:48 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	londst;
	size_t	lonsrc;
	size_t	cont;

	londst = ft_strlen(dst);//calcula la long de la cadena dst
	lonsrc = ft_strlen(src);//calcula la long de la cadena origen
	if (dstsize <= londst)
		return (lonsrc + dstsize);
	cont = londst;
	// Este bucle copia caracteres desde la cadena de origen hasta que se alcance el final de la cadena 
	//o se alcance el tamaño máximo del destino menos uno. 
	while (*src != '\0' && cont < (dstsize - 1))
		//El índice cont se incrementa en cada iteración
		*(dst + cont++) = *src++;
	*(dst + cont) = '\0';
	return (londst + lonsrc);
}
int main() {
    char destino[20] = "Hola, ";
    const char origen[] = "mundo";

    // Utiliza ft_strlcat para concatenar las cadenas
    size_t longitud_concatenada = ft_strlcat(destino, origen, sizeof(destino));

    // Imprime la cadena concatenada y su longitud
    printf("Cadena concatenada: %s\n", destino);
    printf("Longitud de la cadena concatenada: %zu\n", longitud_concatenada);

    return 0;
}
