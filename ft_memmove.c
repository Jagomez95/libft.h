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

void    *ft_memmove(void *dst, const void *src, size_t len)//toma tres parámetros
{
    size_t  i;//utilizada como índice para recorrer los bytes a copiar.
    
    i = 0;
    if (!dst && !src)//Verifica si tanto dst como src son nulos. Si ambos son nulos, la función retorna 0 (indicando un error)
    return (0);
    if ((size_t)dst - (size_t)src < len)//Comprueba si hay solapamiento entre las áreas de origen y destino. En caso afirmativo, la función decide copiar desde el final hacia el principio para evitar problemas de solapamiento.
	{
		i = len - 1;
        while (i < len)
        {
            ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
            i--;
        }
//Si hay solapamiento, la función realiza una copia inversa (de atrás hacia adelante) para evitar sobrescribir datos no copiados aún.
    }
    else
    {
        while (i < len)
        {
            ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
            i++;
//Copia los datos byte a byte desde la fuente (src) al destino (dst). Se utiliza un tipo unsigned char * para tratar los datos como bytes individuales.
        }
    }
//Si no hay solapamiento, realice una copia normal desde el principio hasta el final del bloque
    return (dst);
}
int main()
{
    char src1[] = "Hello, World!";
    char dest1[20];
    
    ft_memmove(dest1, src1, strlen(src1) + 1);
    printf("Resultado: %s\n", dest1);
    return (0);
}
