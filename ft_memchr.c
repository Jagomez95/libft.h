/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:35:37 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/19 19:41:00 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;//que se utilizará para recorrer los bytes del bloque de memoria. Se trata como un puntero a unsigned char para asegurar la correcta interpretación de los bytes.
	size_t			i;

	str = ((unsigned char *) s);//Esto es necesario para trabajar con bytes individuales en lugar de enteros más grandes.
	i = 0;
	while (i < n)//inicia un bucle que recorrera los primeros 'n' bytes de la memoria
	{
		if (str[i] == (unsigned char) c)//Verifica si el byte actual en str es igual al valor de c (convertido a unsigned char).
		{
			return ((void *) &str[i]);//Si se encuentra la coincidencia, devuelve un puntero a la posición de memoria donde se encontró la coincidencia.
		}
		i++;
	}
	return (NULL);
}
int main() {
    const char str[] = "Hello, World!";
    int ch = 'o';

    void *result = ft_memchr(str, ch, sizeof(str));

    if (result != NULL) {
        printf("El byte con valor %d fue encontrado en la posición %ld.\n", ch, (unsigned char *)result - (unsigned char *)str);
    } else {
        printf("El byte con valor %d no fue encontrado.\n", ch);
    }

    return 0;
}
