/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddevico <ddevico@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 16:04:06 by ddevico           #+#    #+#             */
/*   Updated: 2015/12/02 17:24:17 by ddevico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tmp;

	tmp = NULL;
	tmp = (t_list *)malloc(sizeof(t_list));
	if (!tmp)
		return (NULL);
	tmp->content = NULL;
	tmp->next = NULL;
	if (content == 0)
	{
		tmp->content_size = 0;
		return (tmp);
	}
	if ((tmp->content = malloc(content_size)) == 0)
		return (0);
	ft_memcpy(tmp->content, content, content_size);
	tmp->content_size = content_size;
	return (tmp);
}
