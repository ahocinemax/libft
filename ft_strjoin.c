/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 15:13:23 by ahocine           #+#    #+#             */
/*   Updated: 2021/05/31 13:12:56 by ahocine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char		*res;
	size_t		len1;
	size_t		len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (len1 == 0 || len2 == 0)
		return (NULL);
	res = malloc(sizeof(len1 + len2 + 1));
	if (!(res))
		return (NULL);
	ft_strcpy((char *)res, s1);
	ft_strcpy((char *)(res + len1), s2);
	res[len1 + len2] = '\0';
	return (res);
}
