/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:04:07 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/19 17:44:50 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	
	if (!dst && !src)//verifica si ambos punteros nos nulos
		return (0);
	i = 0;
	while (i < n)//Inicia un bucle while que se ejecutará hasta que se hayan copiado n bytes.
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];//se copian byte por byte. Se utilizan punteros de caracteres no firmados para garantizar que se copien bytes individuales sin signo.
		i++;
	}
	return (dst);
}
int main() {
    // Ejemplo: Copiar una cadena a otra
    char fuente[] = "Hola, mundo";
    char destino[20];

    // Utilizar ft_memcpy para copiar la cadena fuente a la cadena destino
    ft_memcpy(destino, fuente, sizeof(fuente));

    // Imprimir el contenido del destino
    printf("Destino: %s\n", destino);

    return 0;
}
