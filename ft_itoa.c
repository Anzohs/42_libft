/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 21:19:38 by hladeiro          #+#    #+#             */
/*   Updated: 2024/04/12 21:39:17 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(long n)
{
	int len_maloc;
	len_maloc = 0;
	if (n < 0)
	{
		n *= -1;
		len_maloc++;
	}
	else if (n >= 0 && n < 10)
		len_maloc++;
	while (n > 9)
	{
		n /= 10;
		len_maloc++;
	}
	return (len_maloc + 1);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	long		l;
	int			i;
	
	l = n;
	i = get_len(n);
	itoa = ft_calloc(i + 1, sizeof(char));
	if (!itoa)
		return (NULL);
	itoa[i + 1] = '\0';
	l = n;
	if (n < 0)
	{
		itoa[0] = '-';
		l *= -1;
	}
	while (l > 9)
	{
		itoa[i--] = n % 10 + '0';
		l /= 10;
	}
	itoa[i] = l + '0';
	return (itoa);
}
