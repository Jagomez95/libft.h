/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:51:10 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/19 17:55:31 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
		i -= 32;
	return (i);
}
int main() {
    char lowercase = 'a';
    char uppercase = ft_toupper(lowercase);

    printf("Original: %c\n", lowercase);
    printf("Mayúscula: %c\n", uppercase);

    return 0;
}
