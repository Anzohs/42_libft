/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:15:35 by hladeiro          #+#    #+#             */
/*   Updated: 2024/04/16 14:36:43 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char *s1, char *set)
{
	int	i;

	i = 0;
	while (*(s1 + i) && *(set + i))
	{
		if (s1[i] != set[i])
			return (0);
		i++;
	}
	return (1);
}

static	int	check_final_set(char *s1, char *set)
{
	size_t	s1_len;
	size_t	set_len;

	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);

	while (s1[--s1_len] && set[--set_len])
	{
		if (s1[s1_len] != set[set_len])
			return (0);
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		end;
	int		j;

	if (!s1)
		return (NULL);
	if (check_set((char *)s1, (char *)set))
		i = (int) ft_strlen(set) - 1;
	else
		i = 0;

	if (check_final_set((char *) s1, (char *) set))
		end = (int) (ft_strlen(s1) - ft_strlen(set)) - 1;
	else
		end = (int) ft_strlen(s1);
	str = ft_calloc(end - i, sizeof(char *));
	if (!str)
		return (NULL);
	j = 0;
	while (i < end)
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	return (str);
}
