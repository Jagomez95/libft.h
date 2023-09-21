/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:39:27 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/19 18:56:47 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *cadena, int carac)
{
	const char	*resultado = NULL;

	while (*cadena != '\0')
	{
		if (*cadena == (char) carac)
		{
			resultado = cadena;
		}
		cadena++;
	}
	return ((char *) resultado);
}
