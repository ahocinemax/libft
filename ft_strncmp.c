/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocine <ahocine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 06:18:04 by ahocine           #+#    #+#             */
/*   Updated: 2021/04/11 06:18:29 by ahocine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n < 1)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		printf("i = %zu\nb1[i] = %c\nb2[i] = %c\n", i, s1[i], s2[i]);
		i++;
	}
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	return (0);
}

static void	ft_print_result(int n)
{
	if (n > 0)
		write(1, "1", 1);
	else if (n < 0)
		write(1, "-1", 2);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}

int				main(void)
{
	write(1, "1 : ", 5);
	ft_print_result(ft_strncmp("salut", "salut", 5));
	write(1, "2 : ", 5);
	ft_print_result(ft_strncmp("test", "testss", 7));
	write(1, "3 : ", 5);
	ft_print_result(ft_strncmp("testss", "test", 7));
	write(1, "4 : ", 5);
	ft_print_result(ft_strncmp("test", "tEst", 4));
	write(1, "5 : ", 5);
	ft_print_result(ft_strncmp("", "test", 4));
	write(1, "6 : ", 5);
	ft_print_result(ft_strncmp("test", "", 4));
	write(1, "7 : ", 5);
	ft_print_result(ft_strncmp("abcdefghij", "abcdefgxyz", 3));
	write(1, "8 : ", 5);
	ft_print_result(ft_strncmp("abcdefgh", "abcdwxyz", 4));
	write(1, "9 : ", 5);
	ft_print_result(ft_strncmp("zyxbcdefgh", "abcdwxyz", 0));
	write(1, "10 : ", 5);
	ft_print_result(ft_strncmp("abcdefgh", "", 0));
	write(1, "11 : ", 5);
	ft_print_result(ft_strncmp("test\200", "test\0", 6));
	return (0);
}