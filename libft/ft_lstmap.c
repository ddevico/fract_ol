/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddevico <ddevico@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 11:51:27 by ddevico           #+#    #+#             */
/*   Updated: 2015/12/02 15:16:50 by ddevico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*result;
	t_list	*res;
	t_list	*res2;

	if (!lst || !f)
		return (NULL);
	res2 = f(lst);
	if ((result = ft_lstnew(res2->content, res2->content_size)))
	{
		res = result;
		lst = lst->next;
		while (lst)
		{
			res2 = f(lst);
			if (!(res->next = ft_lstnew(res2->content, res2->content_size)))
				return (NULL);
			res = res->next;
			lst = lst->next;
		}
	}
	return (result);
}
