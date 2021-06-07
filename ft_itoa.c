/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocine <ahocine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:36:41 by ahocine           #+#    #+#             */
/*   Updated: 2021/06/02 14:03:45 by ahocine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(int n)
{
	int	len;

	len = 1;
	while (n < -9 || n > 9)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		div;
	int		index;

	len = ft_counter(n);
	div = ft_recursive_power(10, len - 1);
	index = 0;
	if (n < 0 && index++)
		len++;
	res = malloc(sizeof(char) * (len + 1));
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (index < len)
	{
		res[index++] = (n / div) + '0';
		n %= div;
		div /= 10;
	}
	res[len] = 0;
	return (res);
}

int	main(void)
{
	char	*res;

	res = ft_itoa(-2147483648);
	printf("%s\n", res);
	return (0);
}
