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
	int	i;
	int	flag;

	flag = 0;
	i = ft_strlen(str);
	while (i >= 0 && flag == 0)
	{
		if (str[i] == c)
		{
			return ((char *)&str[i]);
			flag = 1;
		}
		i--;
	}
	return (NULL);
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
