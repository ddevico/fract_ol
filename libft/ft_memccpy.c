/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddevico <ddevico@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 12:33:59 by ddevico           #+#    #+#             */
/*   Updated: 2015/11/27 16:43:02 by ddevico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int		i;
	unsigned char		*d;
	unsigned char		*s;
	unsigned char		x;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	x = (unsigned char)c;
	while (i < n)
	{
		if ((*d++ = *s++) == x)
			return (d);
		i++;
	}
	return (NULL);
}
