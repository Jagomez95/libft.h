/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:16:48 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/13 12:33:23 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
		return (1);
	return (0);
}
int main()
{
    int i;
    
    i = '+';
    if(ft_isascii(i))
    {
        printf("%c esta dentro de ascii nene.\n", i);
    }
    else
    {
        printf("%c no esta dentro de ascii nene.\n", i);
    }
}
