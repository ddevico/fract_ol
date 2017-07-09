/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddevico <ddevico@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:12:32 by ddevico           #+#    #+#             */
/*   Updated: 2015/11/26 10:55:45 by ddevico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	unsigned char *s1;
	unsigned char *s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (s1[0] - s2[0])
			return (s1[0] - s2[0]);
		s1 = &s1[1];
		s2 = &s2[1];
	}
	if (s1[0] - s2[0])
		return (s1[0] - s2[0]);
	return (0);
}
