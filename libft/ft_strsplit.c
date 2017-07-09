/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddevico <ddevico@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 13:54:16 by ddevico           #+#    #+#             */
/*   Updated: 2015/12/07 12:05:07 by ddevico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordsize(char const *s, char c)
{
	int	size;

	size = 0;
	while (*s != '\0' && *s != c)
	{
		s++;
		size++;
	}
	return (size);
}

static int	ft_countwords(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			count++;
		s++;
	}
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**ptr;
	size_t	nb_words;
	size_t	i;
	size_t	word_size;

	if (s == 0)
		return (0);
	nb_words = ft_countwords(s, c);
	if ((ptr = malloc((nb_words + 1) * sizeof(*ptr))) == 0)
		return (NULL);
	i = 0;
	while (i < nb_words && *s != '\0')
	{
		while (*s == c)
			s++;
		word_size = ft_wordsize(s, c);
		if ((ptr[i] = malloc((word_size + 1) * sizeof(**ptr))) == 0)
			return (NULL);
		ft_strncpy(ptr[i], s, word_size);
		ptr[i][word_size] = '\0';
		s += word_size;
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}
