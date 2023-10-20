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
	if (dstsize == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
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
