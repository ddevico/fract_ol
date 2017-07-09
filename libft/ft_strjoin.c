/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddevico <ddevico@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 19:13:21 by ddevico           #+#    #+#             */
/*   Updated: 2015/12/07 11:54:42 by ddevico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char *dst;

	if (str1 == 0 || str2 == 0)
		return (0);
	dst = ft_strnew(ft_strlen(str1) + ft_strlen(str2));
	if (dst == 0)
		return (0);
	ft_strcpy(dst, str1);
	ft_strcat(dst, str2);
	return (dst);
}
