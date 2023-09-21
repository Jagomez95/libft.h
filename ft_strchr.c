/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:05:49 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/19 18:29:16 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *cadena, int carac)
{
	while (*cadena != '\0')
	{
		if (*cadena == (char) carac)
		{
			return ((char *) cadena);
		}
		cadena++;
	}
	return (NULL);
}
