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
	if (src != NULL)
	{
		len = ft_strlen(src);
		if (dst != NULL && dstsize != 0)
		{
			i = 0;
			while ((i < len) && i < (dstsize - 1))
			{
				dst[i] = src[i];
				i++;
			}
			dst[i] = '\0';
		}
	}
	return (len);
}
int main() {
    char destino[20];
    const char origen[] = "Hola, mundoooo";

    // Utiliza ft_strlcpy para copiar la cadena
    size_t longitud_copiada = ft_strlcpy(destino, origen, sizeof(destino));

    // Imprime la cadena copiada y su longitud
    printf("Cadena copiada: %s\n", destino);
    printf("Longitud de la cadena copiada: %zu\n", longitud_copiada);

    return 0;
}
