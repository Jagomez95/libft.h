/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:25:03 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/19 17:13:50 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}
int main() {
    char cadena[10];
	
    // Utilizar ft_bzero para establecer los primeros 5 bytes de la cadena a cero
    ft_bzero(cadena, 5);

    // Imprimir la cadena después de ft_bzero
    printf("Cadena después de ft_bzero: %s\n", cadena);

    return 0;
}
