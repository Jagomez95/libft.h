/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:03:03 by jagomez           #+#    #+#             */
/*   Updated: 2023/10/02 16:10:12 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;// Declara un puntero str que se utilizará para almacenar la nueva cadena resultante de la concatenación.
	size_t	i;//utilizará como índice para recorrer la cadena de entrada.
	size_t	j;//utilizará como índice para recorrer la cadena resultante.

	i = 0;
	j = 0;
	//Asigna dinámicamente memoria para la nueva cadena. El tamaño es la suma de las longitudes de las cadenas más uno para 
	//el carácter nulo \0 al final. Se utiliza ft_strlen para obtener la longitud de las cadenas s1 y s2.
	str = (char *) malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	//Verifica si la asignación de memoria fue exitosa. Si no lo fue, devuelve NULL.
	if (!str)
		return (NULL);
	//Copia los caracteres de la primera cadena (s1) a la nueva cadena (str) y actualiza los índices.
	while (s1[i])
	{
		str[j++] = s1[i];
		i++;
	}
	// Repite el proceso para la segunda cadena (s2), agregando sus caracteres a la nueva cadena.
	i = 0;
	while (s2[i])
	{
		str[j++] = s2[i];
		i++;
	}
	str[j] = 0;//Agrega el carácter nulo \0 al final de la nueva cadena.
	return (str);
}
int main() {
    const char *cadena1 = "Hola, ";
    const char *cadena2 = "mundo!";

    // Llamar a la función ft_strjoin para concatenar las cadenas
    char *resultado = ft_strjoin(cadena1, cadena2);

    if (resultado != NULL) {
        // Imprimir el resultado
        printf("Cadena concatenada: %s\n", resultado);

        // Liberar la memoria asignada por ft_strjoin
        free(resultado);
    } else {
        printf("Error al concatenar las cadenas.\n");
    }

    return 0;
}
