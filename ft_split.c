/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:44:27 by hladeiro          #+#    #+#             */
/*   Updated: 2024/04/12 19:20:51 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len);
void	*ft_calloc(size_t count, size_t size);

static int	count_words(char *s, char c)
{
	int	i;
	int	result;

	i = 1;
	result = 0;
	while (s[i])
	{
		if (s[0] != c && i == 1)
			result++;
		if (s[i - 1] == c && s[i] != c)
			result++;
		i++;
	}
	return (result);
}

static int	find_del(char *s, char c)
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
	int		d;
	char	**ptr;

	words = count_words((char *)s, c);
	ptr = ft_calloc((size_t)count_words((char *)s, c) + 1, sizeof(char *));
	if (!ptr)
		return (NULL);
	i = 0;
	d = 0;
	while (d < words)
	{
		while (s[i] == c)
			i++;
		pos = find_del((char *)s + i, c);
		ptr[d] = ft_substr(s, (unsigned int) i, (size_t)pos);
		i += pos;
		d++;
	}
	return (ptr);
}
