/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagomez <jagomez@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:03:32 by jagomez           #+#    #+#             */
/*   Updated: 2023/10/27 17:34:09 by jagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*ft_countw cuenta la cantidad de palabras en la cadena str usando el delimitador c.
trigger se utiliza para evitar contar múltiples delimitadores consecutivos como palabras separadas.
Si encuentra un carácter diferente de c y trigger es 0, incrementa el contador i y activa trigger.
Si encuentra el delimitador c, desactiva trigger.*/

static int	ft_countw(char *str, char c)
{
	int		i;
	int		trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if ((*str != c && trigger == 0))
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

/*ft_free libera la memoria asignada dinámicamente para un arreglo de cadenas.
Utiliza free para liberar cada cadena individual en el arreglo y luego libera la memoria del arreglo en sí.
Retorna 0 al final, indicando una operación de liberación fallida.*/

static char	**ft_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (0);
}

/*wordalloc asigna memoria para las palabras encontradas en la cadena str y las almacena en el arreglo tab.
Utiliza un bucle para recorrer la cadena str.
Cuando encuentra un carácter diferente de c, cuenta la longitud de la palabra.
Usa ft_substr para crear una subcadena que representa la palabra y la almacena en el arreglo tab.
Si la asignación de memoria falla, libera la memoria previamente asignada y retorna 0.*/

static int	wordalloc(char **tab, char *str, char c)
{
	int		i;
	int		j;
	int		words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			j = 0;
			while ((str[i + j] != c) && (str[i + j]))
				j++;
			tab[words] = ft_substr(str, i, j);
			if (tab[words] == 0)
				return (ft_free(tab), 0);
			i = i + j;
			words++;
		}
	}
	return (1);
}

/*La función ft_split es la función principal que se expone.
Comienza por verificar si la cadena de entrada s es nula, en cuyo caso devuelve 0.
Utiliza ft_calloc para asignar memoria para el arreglo de cadenas sp. El tamaño es determinado por la cantidad de palabras encontradas en la cadena más 1 (para el marcador de fin de array de cadenas).
Llama a wordalloc para llenar el arreglo sp con las palabras de la cadena.
Retorna el arreglo de cadenas sp. Si hay algún error en la asignación de memoria, devuelve 0.*/

char	**ft_split(char const *s, char c)
{
	char	**sp;

	if (!s)
		return (0);
	sp = ft_calloc(ft_countw((char *)s, c) + 1, sizeof(char *));
	if (!sp)
		return (0);
	if (!wordalloc(sp, (char *)s, c))
		return (0);
	return (sp);
}
