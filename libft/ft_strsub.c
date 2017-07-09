/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddevico <ddevico@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:05:19 by ddevico           #+#    #+#             */
/*   Updated: 2015/12/07 11:52:46 by ddevico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *src, unsigned int start, size_t len)
{
	char	*dst;
	int		i;

	if (src == 0)
		return (0);
	i = 0;
	dst = ft_strnew(len);
	if (dst == 0)
		return (0);
	while (i < (int)len)
	{
		dst[i] = src[start + i];
		i++;
	}
	return (dst);
}
