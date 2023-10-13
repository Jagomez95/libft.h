/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:56:00 by jagomez           #+#    #+#             */
/*   Updated: 2023/10/02 17:03:39 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Define una función auxiliar ft_char_in_set que verifica si un carácter c está presente en el conjunto set.
Devuelve 1 si está presente y 0 si no lo está.*/
static int	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_char_in_set(s1[start], set))//La condición del bucle while verifica si el carácter actual no es el carácter nulo ('\0') y si el carácter está en el conjunto. El bucle continuará mientras ambas condiciones sean verdaderas.
		start++;
	end = ft_strlen(s1);//Esta línea es parte del proceso de encontrar la posición final (end) desde la cual no hay caracteres en el conjunto especificado (set).
	/*el bucle while se ejecuta mientras ambas condiciones (end > start y el carácter actual está en el conjunto) son verdaderas. En cada iteración, decrementa end,
 	moviéndolo hacia atrás en la cadena, y continúa hasta que se alcanza un carácter que no está en el conjunto o hasta que end alcanza start. Esto encuentra 
	la posición final desde la cual no hay caracteres en el conjunto al final de la cadena.*/
	while (end > start && ft_char_in_set(s1[end - 1], set))
		end--;
	/*Esta línea se utiliza para asignar dinámicamente memoria para la nueva cadena str que 
 	contendrá la subcadena de s1 desde la posición start hasta la posición end.*/
	str = (char *) malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	/* estas líneas de código realizan la copia de la subcadena de s1 (desde la posición start hasta la posición end - 1) en la nueva cadena str. 
 	El bucle while se encarga de copiar cada carácter individual y luego se asegura de que str esté correctamente terminada con el carácter nulo \0.*/
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}
int main() {
    const char *cadena_original = "   \t  Hola, Mundo!   \t  ";
    const char *conjunto_a_eliminar = " \t";

    // Llamar a la función ft_strtrim para quitar los caracteres en el conjunto del principio y del final
    char *resultado = ft_strtrim(cadena_original, conjunto_a_eliminar);

    if (resultado != NULL) {
        // Imprimir el resultado
        printf("Cadena original: '%s'\n", cadena_original);
        printf("Cadena después de trim: '%s'\n", resultado);

        // Liberar la memoria asignada por ft_strtrim
        free(resultado);
    } else {
        printf("Error al realizar el trim.\n");
    }

    return 0;
}
