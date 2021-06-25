/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocine <ahocine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 21:27:28 by ahocine           #+#    #+#             */
/*   Updated: 2021/05/30 21:27:55 by ahocine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (dest < src)
		ft_memcpy(dest, src, len);
	else
		while (len--)
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
	return (dest);
}

int		main(void)
{
	char	*dst = NULL;
	char	*src = NULL;
	char	*ret_test;
	char	*ret_user;

	ret_test = memmove(dst, src, 0);
	ret_user = ft_memmove(dst, src, 0);
	printf("ret test = %s\nret user = %s.\n", ret_test, ret_user);
	return (0);
}