/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 18:34:57 by hladeiro          #+#    #+#             */
/*   Updated: 2024/04/14 18:59:10 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *list_t;
	t_list *list_temp;

	list_t = *lst;
	if(!*lst || !del)
		return;
	while (list_t)
	{
		del(list_t->content);
		list_temp = list_t->next;
		free(list_t);
		list_t = list_temp;
	}
	*lst = NULL;
}
