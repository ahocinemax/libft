/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocine <ahocine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:36:52 by ahocine           #+#    #+#             */
/*   Updated: 2021/05/31 16:36:53 by ahocine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dst;
	unsigned int	i;

	dst = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dst)
	{
		i = -1;
		while (dst[++i])
			dst[i] = f(i, s[i]);
		dst[i] = 0;
	}
	return (dst);
}
