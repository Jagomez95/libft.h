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
	int	flag;

	flag = 0;
	i = 0;
	while (((char *)str)[i] != '\0' && flag == 0)
	{
		if (((char *)str)[i] == c)
		{
			return ((char *)&str[i]);
			flag = 1;
		}
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
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
