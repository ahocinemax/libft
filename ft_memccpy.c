/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocine <ahocine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 15:29:22 by ahocine           #+#    #+#             */
/*   Updated: 2021/05/31 15:30:06 by ahocine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	void	*res;

	res = ft_memchr(src, c, len);
	if (res != NULL)
		return (ft_memcpy(dest, src, res - src + 1));
	ft_memcpy(dest, src, len);
	return (NULL);
}	
