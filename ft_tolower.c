/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:00:02 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/19 18:02:35 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
	{
		i += 32;
	}
	return (i);
}
int main() {
    char uppercase = 'A';
    char lowercase = ft_tolower(uppercase);

    printf("Original: %c\n", uppercase);
    printf("Mayúscula: %c\n", lowercase);

    return 0;
}
