/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:35:37 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/19 19:41:00 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = ((unsigned char *) s);
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
		{
			return ((void *) &str[i]);
		}
		i++;
	}
	return (NULL);
}
