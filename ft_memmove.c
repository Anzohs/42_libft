/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:21:31 by hladeiro          #+#    #+#             */
/*   Updated: 2024/04/11 19:21:33 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*c;
	unsigned char	*d;
	size_t			i;

	if (!src && !dest)
		return (NULL);
	c = (unsigned char *) src;
	d = (unsigned char *) dest;
	if (d > c)
	{
		while (n-- > 0)
			d[n] = c[n];
	}
	else
	{
		i = -1;
		while (++i < n)
			d[i] = c[i];
	}
	return (dest);
}
