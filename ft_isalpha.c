/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:16:02 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/12 16:30:17 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int x)
{
	if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'))
		return (1);
	return (0);
}
int main() {
    char ch;
	ch = 'a';
    // Llamar a la función ft_isalpha y mostrar el resultado
    if (ft_isalpha(ch)) {
        printf("%c es una letra.\n", ch);
    } else {
        printf("%c no es una letra.\n", ch);
    }

    return 0;
}
