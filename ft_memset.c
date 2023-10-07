/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:47:29 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/19 17:45:12 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = ptr;
	while (i < num)
	{
		s[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
int main() {
    char cadena[10];

    // Imprimir la cadena antes de ft_memset
    printf("Cadena antes de ft_memset: %s\n", cadena);

    // Utilizar ft_memset para establecer los primeros 5 bytes de la cadena en 'A'
    ft_memset(cadena, 'A', 5);

    // Imprimir la cadena después de ft_memset
    printf("Cadena después de ft_memset: %s\n", cadena);

    return 0;
}
