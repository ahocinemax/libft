/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocine <ahocine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:35:34 by ahocine           #+#    #+#             */
/*   Updated: 2021/05/31 16:35:37 by ahocine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char	*little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	q;

	if (!(ft_strlen(little)))
		return ((char *)big);
	i = 0;
	q = ft_strlen(little);
	while (big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && j < len)
		{
			j++;
			if (j == q || j == len)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
