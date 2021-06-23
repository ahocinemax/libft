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
	if (n < 0)
		len++;
	while (n < -9 || n > 9)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	index;
	long	nbr;

	index = ft_counter(n);
	printf("%zu cases necessaires\n", index);
	nbr = n;
	if (nbr < 0)
		nbr = -nbr;
	res = malloc(sizeof(char) * (index + 1));
	if (!res)
		return (NULL);
	printf("Malloc pass. nbr = %ld\nindex = %lu\n", nbr, index);
	res[index] = 0;
	while (index > 0)
	{
		res[index] = (nbr % 10) + '0';
		printf("reste = %ld. current = %c\n", nbr, res[index]);
		nbr /= 10;
		index--;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		int	n = ft_atoi(av[1]);
		printf("\nnb = %d & res = %s\n", n, ft_itoa(n));
	}
	return (0);
}