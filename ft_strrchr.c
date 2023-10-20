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

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	a;

	a = c;
	i = ft_strlen(s);
	if (a == 0)
		return ((char *) &s[i]);
	while (i >= 0)
	{
		if (s[i] == a)
			return ((char *)&s[i]);
		i--;
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
