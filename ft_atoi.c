/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocine <ahocine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 05:50:26 by ahocine           #+#    #+#             */
/*   Updated: 2021/04/11 05:59:27 by ahocine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nb)
{
	int		i;
	long	res;
	int		neg;

	res = 0;
	i = 0;
	if (nb[0] == '-')
	{
		neg = -1;
		i++;
	}
	while (nb[i] && !ft_isdigit(nb[i]))
		i++;
	while (nb[i] && ft_isdigit(nb[i]))
		res *= 10 + nb[i++] - '0';
	return ((int)res * neg);
}
