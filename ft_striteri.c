/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:14:21 by jagomez           #+#    #+#             */
/*   Updated: 2023/10/09 18:17:07 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned	int	i;
	// Verifica si la cadena s o la función f son nulas, y si es así, retorna sin hacer nada
	if (!s || !(*s) || !f)
		return;
	i = 0;
	// Itera sobre cada carácter de la cadena s
	while (s[i])
	{
		// Llama a la función f pasando el índice i y un puntero al carácter s[i]
		f(i, &s[i]);
		++i;
	}
}
int main() {
    char str[] = "Hello, World!";
    
    void print_index_char(unsigned int index, char *character) {
    printf("Índice: %u, Carácter: %c\n", index, *character);
}
    // Llamamos a la función ft_striteri con la cadena y la función de impresión
    ft_striteri(str, &print_index_char);

    return 0;
}
