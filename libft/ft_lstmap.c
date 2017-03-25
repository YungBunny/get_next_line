/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 01:03:22 by cfu               #+#    #+#             */
/*   Updated: 2016/12/18 03:03:07 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*first;

	if (!(first = (t_list *)malloc(sizeof(lst))))
		return (NULL);
	if (lst && f)
	{
		new_list = f(lst);
		first = new_list;
		lst = lst->next;
		while (lst)
		{
			new_list->next = f(lst);
			lst = lst->next;
			new_list = new_list->next;
		}
		new_list->next = NULL;
	}
	return (first);
}
