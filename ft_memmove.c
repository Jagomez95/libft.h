/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:22:58 by jagomez           #+#    #+#             */
/*   Updated: 2023/09/19 19:50:46 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t  i;
    
    i = 0;
    if (!dst && !src)
    return (0);
    if (((size_t)dst) - ((size_t)src < len))
    {
        i = (len - 1);
        while (i < len)
        {
            ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
            i--;
        }
    }
    else
    {
        while (i < len)
        {
            ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    return (dst);
}
int main()
{
    char src1[] = "Hello, World!";
    char dest1[20];
    
    ft_memmove(dest1, src1, strlen(src1) + 1);
    printf("Resultado: %s\n", dest1);
    return (0);
}
