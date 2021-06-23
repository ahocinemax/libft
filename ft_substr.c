/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocine <ahocine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:36:09 by ahocine           #+#    #+#             */
/*   Updated: 2021/05/31 16:36:11 by ahocine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	res = malloc(sizeof(char *) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i] && i < len)
	{
		res[i] = s[i + start];
		i++;
	}
	res[i] = 0;
	return (res);
}
