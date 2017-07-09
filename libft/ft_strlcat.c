/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddevico <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:32:09 by ddevico           #+#    #+#             */
/*   Updated: 2015/11/24 14:39:17 by ddevico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t		i;
	size_t		lend;
	size_t		lens;
	int			max;

	lend = ft_strlen(s1);
	lens = ft_strlen(s2);
	i = 0;
	max = (size - ft_strlen(s1) - 1);
	if (max < 0)
		return (size + lens);
	while (i < lens && i < (size_t)max)
	{
		s1[lend + i] = s2[i];
		i++;
	}
	s1[lend + i] = '\0';
	return (lend + lens);
}
