/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocine <ahocine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:34:33 by ahocine           #+#    #+#             */
/*   Updated: 2021/05/31 16:34:35 by ahocine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	if (!(s))
		return (NULL);
	i = ft_strlen(s);
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	i--;
	while (s[i] != (char)c && s[i])
		i--;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
