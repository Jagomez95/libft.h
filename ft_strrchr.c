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

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	a;

	a = c;
	i = ft_strlen(str);//Calcula la longitud de la cadena str
//es el carácter nulo ('\0'), devuelve un puntero al final de la cadena,
//indicando que el carácter nulo se encuentra al final de la cadena.
	if (a == 0)
		return ((char *)&str[i]);
	while (i >= 0)//Inicia un bucle while que recorre la cadena en sentido inverso, desde el último carácter hasta el primer carácter.
	{
//Compara el carácter actual de str con c. Si son iguales, devuelve un puntero al carácter actual de str.
		if (str[i] == a)
			return ((char *)&str[i]);
		i--;//Retrocede al carácter anterior en la cadena.
	}
	return (0);
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
