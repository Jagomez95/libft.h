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
