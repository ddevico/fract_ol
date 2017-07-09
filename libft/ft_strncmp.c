/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddevico <ddevico@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 10:56:40 by ddevico           #+#    #+#             */
/*   Updated: 2015/11/27 15:26:58 by ddevico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char *s1;
	unsigned char *s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	if (n == 0)
		return (0);
	while (*s1 != '\0' && *s2 != '\0' && n != 0)
	{
		if (s1[0] - s2[0])
			return (s1[0] - s2[0]);
		n--;
		if (n != 0)
		{
			s1 = &s1[1];
			s2 = &s2[1];
		}
	}
	if (s1[0] - s2[0])
		return (s1[0] - s2[0]);
	return (0);
}
