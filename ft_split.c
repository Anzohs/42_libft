/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:44:27 by hladeiro          #+#    #+#             */
/*   Updated: 2024/04/11 22:16:57 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len);

static int	count_words(char const *s, char c)
{
	char	*p;
	int		i;
	int		result;

	i = 1;
	result = 0;
	p = (char *) s;
	while (p[i])
	{
		if (p[0] != c && i == 1)
			result++;
		if (p[i - 1] == c && p[i] != c)
			result++;
		i++;
	}
	return (result);
}

static int	find_del(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (s[i] == c || !s[i])
		return (i);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	int		pos;
	int		len;
	int		d;
	char	**ptr;
	char	*p;

	words = count_words(s, c);
	len = words + 1;
	ptr = (char **) malloc(sizeof(char *) * words + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	d = 0;
	while (words && d < len)
	{
		pos = find_del(s + i, c);
		p = ft_substr(s, (unsigned int) i, (size_t)pos);
		ptr[d] = p;
		free(p);
		i = pos + 1;
		words--;
		d++;
	}
	ptr[len] = NULL;
	return (ptr);
}
