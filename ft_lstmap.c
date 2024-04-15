/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:24:26 by hladeiro          #+#    #+#             */
/*   Updated: 2024/04/15 16:42:11 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	lst_new(void *content)
{
	t_list	*n_list;

	if (!content)
		return (NULL);
	n_list = (t_list *)malloc(sizeof(*n_list));
	if (!list)
		return (NULL);
	n_list->content = content;
	n_list->next = NULL;
	return (n_list);	
}

static void	lstadd_last(t_list **lst, t_list *new)
{
	t_list	*new_list;

	new_list = *lst;
	if (!new_list)
		return (NULL);

}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	if (!new_list)
	{
		new_list = ft_lstnew(f(lst->content));
		if (!new_list->content)
			del(new_list->content);
		lst = lst->next;
	}
	while (lst)
	{
		lst->content = f(lst->content);
		ft_lstadd_back(&lst, new_list);
		lst = lst->next;
	}
	return (new_list);
}
