/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddevico <ddevico@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 13:52:54 by ddevico           #+#    #+#             */
/*   Updated: 2015/12/07 11:57:06 by ddevico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		len;
	char	*dst;

	if (s == 0)
		return (0);
	while (*s != '\0' && (*s == ' ' || *s == '\n' || *s == '\t'))
		s++;
	len = ft_strlen(s);
	while (len > 0 && (s[len - 1] == ' '
				|| s[len - 1] == '\n'
				|| s[len - 1] == '\t'))
		len--;
	if ((dst = (char *)malloc((len + 1) * sizeof(*dst))) == 0)
		return (0);
	ft_strncpy(dst, s, len);
	dst[len] = '\0';
	return (dst);
}
