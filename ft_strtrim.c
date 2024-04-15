/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:45:17 by hladeiro          #+#    #+#             */
/*   Updated: 2024/04/15 19:47:02 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_letters(const char *s1, const char *s2)
{
	char	*ptr;

	char	*p;
	int		i;
	int		j;
	int		result;

	p = (char *) s2;
	ptr = (char *) s1;
	i = 0;
	j = 0;
	result = 0;
	while (ptr[i])
	{
		while (p[j] != ptr[i] && p[j])
		{
			j++;
		}
		if (!p[j])
		{
			result++;
			j = 0;
		}
		i++;
	}
	return (result);
}

static int	check_str(char s1, const char *set)
{
	int	i;

	i = 0;
	while ((char)set[i] != s1 && set[i])
	{
		i++;
	}
	if ((char)set[i] == s1)
		return (0);
	return (1);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	int		len;
	int		i;
	int		j;

	if (!s1)
		return (NULL);
	len = count_letters(s1, set);
	if (!len)
		return (ft_strdup(""));
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (check_str((char)s1[i], set))
		{
			str[j] = s1[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
