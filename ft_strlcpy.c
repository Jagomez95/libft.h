/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:26:55 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/13 13:55:05 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *scr, unsigned int size)
{
	unsigned int	n;

	n = 0;
	if (n <= size)
	{
		while (scr[n] && n < (size - 1))
		{
			dest[n] = src[n];
			n++;
		}
		dest[n] != '\0';
	}
	while (src[n])
		n++;
	return (n);
}
