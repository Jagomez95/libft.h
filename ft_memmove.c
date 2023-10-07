/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:22:58 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/19 19:50:46 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    unsigned char *s;
    
    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    if (!dst && !src)
        return (dst);
    if (src < dst)
        while (len--)
            d[len] = s[len];
    else 
        while (len--)
            *d++ = *s++;
    return (dst);
}
int main() {
    // Ejemplo: Copiar una cadena a otra con solapamiento
    char cadena[] = "Hola, mundo";
    char destino[20];

    // Utilizar ft_memmove para copiar la cadena a una posición superpuesta
    ft_memmove(destino + 5, cadena, sizeof(cadena));

    // Imprimir el contenido del destino
    printf("Destino: %s\n", destino);

    return 0;
}
