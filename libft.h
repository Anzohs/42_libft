/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:24:43 by hladeiro          #+#    #+#             */
/*   Updated: 2024/04/11 19:32:04 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

typedef struct s_list
{
	void	*content;
	struct s_list	*next;
}		t_list;

size_t	t_strlen(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int	ft_isalpha(int c);// ver se as 2 funções seguintes serão nessesárias!
int	ft_isupper(int c);
int	ft_islower(int c);// até aqui!
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_atoi(const char *npt);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strdup(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_calloc(size_t count, size_t size);

char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *s1, const char *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif
