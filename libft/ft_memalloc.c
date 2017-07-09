/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddevico <ddevico@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:16:19 by ddevico           #+#    #+#             */
/*   Updated: 2015/11/30 14:12:49 by ddevico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*t;
	size_t	i;

	if ((t = malloc(size)) == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		t[i] = 0;
		i++;
	}
	return (t);
}
