/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:27:32 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/13 12:32:01 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isprint(int x)
{
	if (x >= 32 && x <= 126)
		return (1);
	return (0);
}
int main()
{
    int i;
    
    i = 'g';
    if (ft_isprint(i))
    {
        printf("%c si es imprimible.\n", i);
    }
    else
    {
        printf("%c no es imprimible.\n", i);
    }
}
