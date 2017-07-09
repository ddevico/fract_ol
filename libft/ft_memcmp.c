/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddevico <ddevico@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 10:56:46 by ddevico           #+#    #+#             */
/*   Updated: 2015/11/24 11:09:52 by ddevico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char *s1;
	unsigned char *s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (n != 0)
	{
		if (s1[0] - s2[0])
			return (s1[0] - s2[0]);
		s1 = &s1[1];
		s2 = &s2[1];
		n--;
	}
	return (0);
}
