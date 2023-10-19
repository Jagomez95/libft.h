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
	int	i;
	int	flag;//Se declara una variable entera flag que se utiliza para indicar si se ha encontrado el carácter.

	flag = 0;
	i = 0;
	//Inicia un bucle while. El bucle se ejecutará mientras el carácter en la posición i de la cadena no sea el carácter nulo ('\0') y flag sea igual a 0.
	while (((char *)str)[i] != '\0' && flag == 0)
	{
		if (((char *)str)[i] == c)//Comprueba si el carácter en la posición i de la cadena es igual al carácter c.
		{
			return ((char *)&str[i]);//Si se encuentra el carácter, devuelve un puntero a la posición en la que se encontró. La conversión de tipo (char *)&str[i] se realiza para cambiar el tipo de constante a no constante.
			flag = 1;//eliminar esta linea
		}
		i++;
	}
	if (c == '\0')//Verifica si el carácter c es el carácter nulo ('\0').
		return ((char *)&str[i]);//Si c es el carácter nulo, devuelve un puntero al final de la cadena.
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
