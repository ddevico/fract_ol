/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddevico <ddevico@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:02:56 by ddevico           #+#    #+#             */
/*   Updated: 2015/11/27 16:34:37 by ddevico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	char		*d;
	char		*s;

	s = (char *)src;
	d = dest;
	i = 0;
	while (n != 0)
	{
		*d++ = *s++;
		n--;
		i++;
	}
	return (dest);
}
