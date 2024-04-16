/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:15:35 by hladeiro          #+#    #+#             */
/*   Updated: 2024/04/16 15:40:15 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	to_trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (*(set + i))
	{
		if (*(set + i) == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*new_string(const char *s1, int start, int len)
{
	char	*str;
	int		i;

	if (start > len)
		return (ft_strdup(""));
	str = ft_calloc(len, sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[start + i];
		i ++;
	}
	return (str);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int	i;
	int	j;

	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	if (ft_strlen(set) == 0)
		return (ft_strdup(s1));
	i = 0;
	j = (int) ft_strlen(s1) - 1;
	while (to_trim(set, s1[i]))
		i++;
	while (to_trim(set, s1[j]))
		j--;
	return (new_string(s1, i, j - (i - 1)));
}
