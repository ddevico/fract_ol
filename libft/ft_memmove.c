/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddevico <ddevico@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:25:18 by ddevico           #+#    #+#             */
/*   Updated: 2015/11/27 16:42:32 by ddevico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *d;
	char *s;

	d = (char *)dest;
	s = (char *)src;
	if (s == d)
		return (dest);
	if (s < d)
	{
		s = s + n - 1;
		d = d + n - 1;
		while (n--)
		{
			*d-- = *s--;
		}
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}
