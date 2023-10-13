/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:36:00 by jagomez           #+#    #+#             */
/*   Updated: 2023/10/02 15:55:06 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(*s) * (len + 1));//Asigna dinámicamente memoria para la nueva subcadena. El tamaño es (len + 1) para incluir el carácter nulo \0 al final de la cadena.
	if (!str)// Verifica si la asignación de memoria fue exitosa.
		return (NULL);
	while (s[i])//Itera a través de la cadena original s hasta que se alcance el final de la cadena.
	{
		if (i >= start && j < len)// Verifica si la posición actual i está en o después del índice de inicio start y si aún no se ha alcanzado la longitud deseada len.
		{
			//Copia el carácter actual de la cadena original a la nueva subcadena y aumenta j.
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';//Agrega el carácter nulo \0 al final de la nueva subcadena.
	return (str);
}
int main() {
    const char *original = "Hello, World!";
    
    // Obtener una subcadena desde el índice 7 hasta una longitud de 5
    char *substring = ft_substr(original, 7, 5);

    if (substring != NULL) {
        printf("Cadena Original: %s\n", original);
        printf("Subcadena: %s\n", substring);

        // Liberar la memoria asignada por ft_substr
        free(substring);
    } else {
        printf("Error al obtener la subcadena.\n");
    }

    return 0;
}
