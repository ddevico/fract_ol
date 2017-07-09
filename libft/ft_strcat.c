/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddevico <ddevico@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:34:47 by ddevico           #+#    #+#             */
/*   Updated: 2015/12/07 11:38:10 by ddevico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*cur1;
	char	*cur2;

	cur1 = s1;
	cur2 = (char *)s2;
	while (*cur1 != '\0')
	{
		cur1++;
	}
	while (*cur2 != '\0')
	{
		*cur1 = *cur2;
		cur1++;
		cur2++;
	}
	*cur1 = '\0';
	return (s1);
}
