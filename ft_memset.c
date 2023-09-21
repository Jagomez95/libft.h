/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:47:29 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/19 17:45:12 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = ptr;
	while (i < num)
	{
		s[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}

/*int main()
{
	char buffer[100];
	int value = 65,

		ft_memset(buffer, value, sizeof(buffer));
	for (int i = 0; i < sizeof(buffer); i++)
	{
		printf("%c", buffer[i]);
	}
	printf("\n");
	return 0;
}*/
