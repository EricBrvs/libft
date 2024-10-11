/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmapi_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebervas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 11:20:35 by ebervas           #+#    #+#             */
/*   Updated: 2024/10/11 13:04:54 by ebervas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*tmp;
	t_list	*new_elem;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			while (new_lst)
			{
				new_elem = new_lst->next;
				del(new_lst->content);
				free(new_lst);
				new_lst = new_elem;
			}
			return (NULL);
		}
		if (!new_lst)
			new_lst = tmp;
		else
			new_elem->next = tmp;
		new_elem = tmp;
	}
	return (new_lst);
}
