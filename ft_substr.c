/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:36:00 by jagomez           #+#    #+#             */
/*   Updated: 2023/10/02 15:55:06 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	a;
	unsigned int	b;
	char			*str;

	if (!s)
		return (0);
	a = 0;
	b = 0;
	while (s[a] && a < start)
		a++;
	while (s[a] && b < len)
	{
		a++;
		b++;
	}
	str = (char *)malloc(b * sizeof(char) + 1);
	if (!str)
		return (0);
	a = 0;
	while (a < b)
	{
		str[a] = s[start + a];
		a++;
	}
	return (str[a] = '\0', str);
}
int main() {
    const char *original = "Hello, World!";
    
    // Obtener una subcadena desde el índice 7 hasta una longitud de 5
    char *substring = ft_substr(original, 7, 5);

    if (substring != NULL) {
        printf("Cadena Original: %s\n", original);
        printf("Subcadena: %s\n", substring);

        // Liberar la memoria asignada por ft_substr
        free(substring);
    } else {
        printf("Error al obtener la subcadena.\n");
    }

    return 0;
}
