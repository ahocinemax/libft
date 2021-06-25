/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocine <ahocine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 06:18:04 by ahocine           #+#    #+#             */
/*   Updated: 2021/06/24 19:01:51 by ahocine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	*b1;
	unsigned int	*b2;

	if (n < 1)
		return (0);
	i = 0;
	b1 = (unsigned int *)s1;
	b2 = (unsigned int *)s2;
	while ((b1[i] || b2[i]) && i < n)
	{
		if (b1[i] != b2[i])
			return (b1[i] - b2[i]);
		i++;
	}
	return (0);
}
