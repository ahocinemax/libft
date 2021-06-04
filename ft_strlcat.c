/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocine <ahocine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:35:19 by ahocine           #+#    #+#             */
/*   Updated: 2021/06/04 14:23:27 by ahocine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	if (!(dst) || !(src) || !(dstsize))
		return (0);
	len = 0;
	i = -1;
	while (dst[len] && len < dstsize - 1)
		len++;
	while (len < dstsize -1 && src[++i])
	{
		dst[len] = src[i];
		len++;
	}
	dst[dstsize] = 0;
	return (len);
}
