/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:37:59 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/29 17:03:38 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	char	*s1;
	size_t	i;

	s1 = (char *)s;
	i = 0;
	d = (char *)malloc(ft_strlen(s1) + 1);//Utiliza malloc para asignar memoria para la nueva cadena. ft_strlen(s1) + 1 es el tamaño necesario para la nueva cadena, y se agrega 1 para el carácter nulo \0 al final. Si malloc falla, se devuelve NULL.
	if (d == NULL)//si malloc falla se devuelve nulo
		return (NULL);
	//Copia cada carácter de la cadena original a la nueva cadena hasta que se alcance el carácter nulo \0.
	while (s1[i] != '\0')
	{
		d[i] = s1[i];
	   i++;
	}
	d[i] = '\0';//Agrega el carácter nulo \0 al final de la nueva cadena.
	return (d);
}
int main() {
    const char *original = "Hello, World!";

    // Duplicar la cadena utilizando ft_strdup
    char *duplicate = ft_strdup(original);

    // Verificar si la duplicación fue exitosa
    if (duplicate != NULL) {
        printf("Cadena Original: %s\n", original);
        printf("Copia Duplicada: %s\n", duplicate);

        // Liberar la memoria asignada por ft_strdup
        free(duplicate);
    } else {
        printf("Error al duplicar la cadena.\n");
    }

    return 0;
}
