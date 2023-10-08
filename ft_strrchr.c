/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:39:27 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/19 18:56:47 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *cadena, int carac)
{
	const char	*resultado = NULL;//Este puntero se utiliza para rastrear la última ocurrencia del carácter en la cadena.
	while (*cadena != '\0')
	{
		if (*cadena == (char) carac)//Compara el carácter actual de la cadena con el carácter especificado (carac).
		{
			resultado = cadena;//Si se encuentra una coincidencia, actualiza el puntero resultado con la posición actual de la cadena
		}
		cadena++;
	}
	return ((char *) resultado);//Devuelve un puntero al último lugar en la cadena donde se encuentra el carácter carac.
					//Si no se encuentra el carácter en la cadena, devuelve NULL.
}
int main() {
    const char *cadena = "Hola, mundo";
    int carac = 'o';

    // Utiliza ft_strrchr para buscar la última aparición de 'o' en la cadena
    char *resultado = ft_strrchr(cadena, carac);

    if (resultado != NULL) {
        printf("Carácter encontrado: %c\n", *resultado);
        printf("Posición en la cadena: %ld\n", resultado - cadena);
    } else {
        printf("Carácter no encontrado.\n");
    }

    return 0;
}
