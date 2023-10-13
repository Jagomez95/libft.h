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
// Verifica si copia es negativo. Si es así, ajusta copia a su valor absoluto multiplicándolo por -1 y escribe el signo '-' en el archivo.
	if (copia < 0)
	{
		copia = (copia * - 1);
		write (fd, "-", 1);
	}
// Verifica si el valor absoluto de copia es mayor que 9. Si es así, realiza una llamada recursiva a ft_putnbr_fd para imprimir los dígitos.
	if (copia > 9)
	{
		ft_putnbr_fd (copia / 10, fd); //Llamada recursiva para imprimir el dígito de la decena.
		ft_putchar_fd ((copia % 10) + '0', fd); //Imprime el dígito de la unidad.
	}
	else
		ft_putchar_fd (copia + '0', fd);//Si el valor absoluto de copia es menor o igual a 9, imprime el dígito directamente.
}
