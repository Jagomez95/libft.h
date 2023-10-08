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

char	*ft_strchr(const char *cadena, int carac)
{
	while (*cadena != '\0')
	{
		if (*cadena == (char) carac)//Compara el carácter actual de la cadena con el carácter especificado (carac). 
		{
			return ((char *) cadena);// Si se encuentra una coincidencia, devuelve un puntero al lugar en la cadena donde se encontró la coincidencia.
		}
		cadena++;
	}
	return (NULL);
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
