/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:01:38 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/29 15:11:10 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	c;
	int	s;
	int	res;

	c = 0;
	s = 1;
	res = 0;
	while (str[c] == ' ' || str[c] == '\n' || str[c] == '\t'
		|| str[c] == '\v' || str[c] == '\f' || str[c] == '\r')
		c++;
	if (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			s = -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (res * 10) + (str[c] - '0');
		c++;
	}
	return (res * s);
}
int main() {
    // Ejemplo 1: cadena con dígitos positivos
    const char *str1 = "12345";
    int result1 = ft_atoi(str1);
    printf("Resultado 1: %d\n", result1);

    // Ejemplo 2: cadena con dígitos negativos
    const char *str2 = "-6789";
    int result2 = ft_atoi(str2);
    printf("Resultado 2: %d\n", result2);

    // Ejemplo 3: cadena con espacios y dígitos
    const char *str3 = "    42";
    int result3 = ft_atoi(str3);
    printf("Resultado 3: %d\n", result3);
    return 0;
}
