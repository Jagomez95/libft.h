/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:58:59 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/19 17:10:03 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	ft_isalnum(int a)
{
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')
		|| (a >= '0' && a <= '9'))
		return (1);
	return (0);
}
int main()
{
    int i;
    
    i = '@';
    if (ft_isalnum(i))
    {
        printf("%c es un alfanumerico.\n", i);
    }
    else
    {
        printf("%c no es un alfanumerico.\n", i);
    }
}
