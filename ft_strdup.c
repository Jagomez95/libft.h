/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:37:59 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/29 17:03:38 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	char	*s1;
	size_t	i;

	s1 = (char *)s;
	i = 0;
	d = (char *)malloc(ft_strlen(s1) + 1);
	if (d == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		d[i] = s1[i];
	   i++;
	}
	d[i] = '\0';
	return (d);
}
