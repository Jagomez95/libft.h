/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:39:39 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/19 17:07:18 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}
int main()
{
    int i;
    
    i = '5';
    
    if (ft_isdigit(i))
    {
        printf("%c si es un numero.\n", i);
    }
    else
    {
        printf("%c no es un numero.\n", i);
    }
}
