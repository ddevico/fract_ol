/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddevico <ddevico@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:04:45 by ddevico           #+#    #+#             */
/*   Updated: 2015/12/02 16:48:15 by ddevico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0' && j < (int)ft_strlen(s2) && i < (int)n)
	{
		if (s1[i] == s2[j])
			j++;
		i++;
	}
	if (j == (int)ft_strlen(s2))
		return ((char *)s1 + i - j);
	else
		return (NULL);
}
