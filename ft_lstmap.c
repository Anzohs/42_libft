/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:24:26 by hladeiro          #+#    #+#             */
/*   Updated: 2024/04/14 19:49:19 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content);
void	ft_lstadd_back(t_list **lst, t_list *new);

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	if (!new_list)
	{
		lst->content = f(lst->content);
		new_list = ft_lstnew(lst->content);
		del(lst->content);
		lst = lst->next;
	}
	while (lst)
	{
		lst->content = f(lst->content);
		ft_lstadd_back(&lst, new_list);
		del(lst->content);
		lst = lst->next;
	}
	return (new_list);
}

int	main()
{



}
