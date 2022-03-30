/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocine <ahocine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 15:15:52 by ahocine           #+#    #+#             */
/*   Updated: 2022/03/07 04:58:37 by ahocine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(int argc, char **av)
{
	char	*res;
	int		i;

	if (argc != 2)
		return (-1);
	i = -1;
	res = av[1];
	while (res[++i])
		res[i] = ft_toupper(res[i]);
	printf("%s\n", res);
	return (0);
}
