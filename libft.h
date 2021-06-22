/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:08:08 by ahocine           #+#    #+#             */
/*   Updated: 2021/06/04 14:32:44 by ahocine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <bsd/string.h>

void	*ft_memset(void *dest, int c, size_t len);
void	ft_bzero(void *b, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memccpy(void *dest, const void *src, int c, size_t len);	// KO
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memchr(const void *b, int c, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t len);
int		ft_strlen(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);								// KO
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strlcpy(char *dst, char *src, int n);						// KO
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strnstr(const char *big, const char	*little, size_t len);	// KO
int		ft_atoi(const char *nb);										// KO
void	*ft_calloc(size_t number, size_t len);
char	*ft_strdup(const char *str);									// KO
char	*ft_substr(char const *s, unsigned int start, size_t len);		// KO
char	*ft_strjoin(char const *s1, char const *s2);					// KO
char	*ft_strtrim(char const *s1, char const *set);					// KO
char	**ft_split(const char *str, char charset);						// KO
char	*ft_itoa(int n);												// KO min value
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));		// KO
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);									// KO
void	ft_putendl_fd(char *s, int fd);									// KO
void	ft_putnbr_fd(int n, int fd);

#endif
