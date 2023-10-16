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
	unsigned const char	*s;
	unsigned char		*d;
	size_t				i;

	s = (unsigned char *) src;
	d = (unsigned char *) dst;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
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
