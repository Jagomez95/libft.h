/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:05:17 by jagomez           #+#    #+#             */
/*   Updated: 2023/10/02 18:09:10 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	copia;

	copia = n;
	if (copia < 0)
	{
		copia = (copia * - 1);
		write (fd, "-", 1);
	}
	if (copia > 9)
	{
		ft_putnbr_fd (copia / 10, fd);
		ft_putchar_fd ((copia % 10) + '0', fd);
	}
	else
		ft_putchar_fd (copia + '0', fd);
}