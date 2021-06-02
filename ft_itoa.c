/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocine <ahocine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:36:41 by ahocine           #+#    #+#             */
/*   Updated: 2021/06/02 12:33:33 by ahocine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

*static void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
		ft_putchar('-');
	n *= n < 0 ? -1 : 1;
	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}*/

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	len = 1;
	res = NULL;
	while (n / 10 > 9)
	{
		n /= 10;
		len++;
	}
	printf("%d\n", len++);
	return (res);
}

int		main(void)
{
	char *res;

	res = ft_itoa(3163513);
	return (0);
}
