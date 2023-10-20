/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:05:49 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/19 18:29:16 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	a;
//Se crea una variable a y se le asigna el valor de c. Esto se hace para evitar comparar directamente con c en las comparaciones siguientes.
	a = c;
	while (*str)//no sea el carácter nulo ('\0')
	{
//Compara el carácter actual apuntado por str con el valor almacenado en a (que es c). 
//Si son iguales, la función devuelve un puntero al carácter actual de str.
		if (*str == a)
			return ((char *)str);
		str++;
	}
	if (a == '\0')
		return ((char *)str);
	return (0);
}
int main() {
    const char *cadena = "Hola, mundo";
    int carac = 'm';

    // Utiliza ft_strchr para buscar la primera aparición de 'm' en la cadena
    char *resultado = ft_strchr(cadena, carac);

    if (resultado != NULL) {
        printf("Carácter encontrado: %c\n", *resultado);
        printf("Posición en la cadena: %ld\n", resultado - cadena);
    } else {
        printf("Carácter no encontrado.\n");
    }

    return 0;
}
