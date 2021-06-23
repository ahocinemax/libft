/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocine <ahocine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 04:52:12 by ahocine           #+#    #+#             */
/*   Updated: 2021/04/11 05:49:27 by ahocine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	void	*dest;
	int		len_src;

	len_src = 0;
	while (src[len_src])
		len_src++;
	dest = (char *)malloc(sizeof(char) * (len_src + 1));
	if (!dest)
		return (dest);
	ft_memcpy(dest, src, len_src);
	return (dest);
}
