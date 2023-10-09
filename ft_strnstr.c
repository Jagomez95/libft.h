/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:15:19 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/27 20:41:04 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0' || needle == NULL)//comprueba que sea una cadena vacia o un puntero nulo.
		return ((char *)haystack);//devuelve un puntero al comienzo de la cadena haystack
	while (haystack[i] != '\0' && i < len)//Inicia un bucle que recorre la cadena haystack hasta que se llega al final de la cadena o se alcanza la longitud máxima especificada por len.
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)//Inicia un bucle que compara los caracteres de needle con los caracteres de haystack comenzando desde la posición i. El bucle se ejecuta mientras los caracteres coincidan y no se haya alcanzado la longitud máxima len.		{
			if (needle[j + 1] == '\0')//Si se encuentra una coincidencia completa de la subcadena needle en la posición i de haystack, la función devuelve un puntero al comienzo de la coincidencia en haystack.				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
int main() {
    const char *haystack = "This is a sample string.";
    const char *needle = "sample";
    size_t len = 10;

    char *result = ft_strnstr(haystack, needle, len);

    if (result != NULL) {
        printf("Encontrado: %s\n", result);
    } else {
        printf("No encontrado\n");
    }

    return 0;
}
