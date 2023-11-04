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
// Esto define la función ft_substr, que toma tres argumentos: s (la cadena de la cual se extraerá la subcadena), start (la posición de inicio en la cadena original), 
//y len (la longitud de la subcadena a extraer). La función devuelve un puntero a la subcadena resultante.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	a;//contador de la cadena
	unsigned int	b;//contador de la longitud a la subcadena resultante
	char			*str;//puntero de la subcadena 

	if (!s)//verifica si es nula
		return (0);
	a = 0;
	b = 0;
	while (s[a] && a < start)// Este bucle avanza a hasta la posición de inicio (start) en la cadena s. El bucle se detiene si llega al final de la cadena o alcanza la posición de inicio.
		a++;
	while (s[a] && b < len)//Este bucle cuenta la longitud de la subcadena (len). Se detiene si llega al final de la cadena s o alcanza la longitud deseada.
	{
		a++;
		b++;
	}
	str = (char *)malloc(b * sizeof(char) + 1);// Asigna dinámicamente memoria para la subcadena. El tamaño es b * sizeof(char) + 1 para incluir espacio para los caracteres de la subcadena y el carácter nulo al final.
	if (!str)//Verifica si la asignación de memoria fue exitosa.
		return (0);
	a = 0;// Reinicia el contador a a cero.
//Copia los caracteres de la subcadena desde la posición de inicio (start) en la cadena original a la memoria asignada para la subcadena.
	while (a < b)
	{
		str[a] = s[start + a];
		a++;
	}
	return (str[a] = '\0', str);//Agrega el carácter nulo ('\0') al final de la subcadena para asegurar que sea una cadena de caracteres válida. Devuelve el puntero a la subcadena resultante
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
