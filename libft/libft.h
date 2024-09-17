/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csauron <csauron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:09:35 by csauron           #+#    #+#             */
/*   Updated: 2024/09/10 17:31:09 by csauron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <ctype.h>


int    ft_atoi (char *str);
void    ft_bzero(void *b, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_isalnum(int c);
int	    ft_isalpha(int c);
int	    ft_isascii(int c);
int    ft_isdigit(int c);
int	    ft_isprint(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int	    ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strnstr(const char	*big, const char *little, size_t len);
char	*ft_to_lower(char *str);
char	*ft_to_upper(char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
static char	**ft_malloc_error(char **tab);
static size_t	ft_nb_words(char const *s, char c);
static void	ft_get_next_word(char **next_word, size_t *next_word_len, char c);
char	**ft_split(char const *s, char c);
static	char	*ft_swap(char *tab, int size);
static	char	*ft_is_zero(char *tab);
static	int	ft_len(int c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif