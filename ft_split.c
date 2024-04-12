/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:44:27 by hladeiro          #+#    #+#             */
/*   Updated: 2024/04/12 15:16:39 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
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
	if(i == 0 && s[i] == c)
		i++;
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

	words = count_words(s, c);
	ptr = (char **) malloc(sizeof(char *) * words + 1);
	if (!ptr || !s)
		return (NULL);
	i = 0;
	d = 0;
	while (words)
	{
		pos = find_del(s + i, c);
		ptr[d] = ft_substr(s, (unsigned int) i, (size_t)pos);
		i += pos + 1;
		words--;
		d++;
	}
	ptr[d] = NULL;
	return (ptr);
}
/*
int	main()
{
	char	**str = ft_split(" tesing, this fuking shit", ' ');
	int	i = 0;

	while(str[i])
		printf("string: %s  \n", str[i++]);

}

*/
