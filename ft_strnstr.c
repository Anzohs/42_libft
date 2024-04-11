/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:16:57 by hladeiro          #+#    #+#             */
/*   Updated: 2024/04/11 19:20:26 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	if (!little)
		return ((char *) big);
	while (big[i] && i < (int)len)
	{
		if (big[i] == little[j])
		{
			k++;
			j++;
		}
		else if (!little[j])
			return ((char *) big + (i - k));
		else
		{
			j = 0;
			i -= k;
			k = 0;
		}
		i++;
	}
	return (NULL);
}
