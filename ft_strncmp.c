/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:00:39 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/19 19:18:01 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while ((*s1 || *s2) && n--)//continuará mientras al menos uno de los caracteres en s1 o s2 sea no nulo (*s1 o *s2 sea verdadero), y aún haya caracteres por comparar (n sea mayor que 0).
        if (*s1++ != *s2++)//compara los caracteres s1 y s2 a medida se incrementa
		//la funcion retorna la diferencia entre los valores ASCII
            return ((unsigned char)*--s1 - (unsigned char)*--s2);//si es diferente, se retorna la dif y retroceden una posicion para apuntar el caracter que causo la diferencia
    return (0);
}
int main() {
    const char *cadena1 = "Hola";
    const char *cadena2 = "Hola, mundo";

    int resultado = ft_strncmp(cadena1, cadena2, 4);

    if (resultado == 0) {
        printf("Las cadenas son iguales en los primeros caracteres.\n");
    } else if (resultado < 0) {
        printf("La cadena1 es menor que la cadena2.\n");
    } else {
        printf("La cadena1 es mayor que la cadena2.\n");
    }

    return 0;
}
