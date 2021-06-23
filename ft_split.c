/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 17:08:08 by ahocine           #+#    #+#             */
/*   Updated: 2021/05/22 17:29:46 by ahocine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cntline(const char *str, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == sep)
			i++;
		if (str[i] && str[i] != sep)
			count++;
		while (str[i] && str[i] != sep)
			i++;
	}
	return (count);
}

static char	*ft_malloc_word(int size_line, const char *word_to_malloc)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(size_line + 1);
	if (!dest)
		return (NULL);
	while (word_to_malloc[i] && i < size_line)
	{
		dest[i] = word_to_malloc[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	**ft_split(const char *str, char sep)
{
	char	**arr;
	int		index;
	int		i;
	int		s_line;
	int		size_to_malloc;

	size_to_malloc = ft_cntline(str, sep);
	arr = (char **)malloc(sizeof(char *) * (size_to_malloc + 1));
	index = 0;
	i = 0;
	while (index < size_to_malloc && i < ft_strlen(str) - 1)
	{
		s_line = 0;
		while (((char)str[i + s_line] != sep) && (char)str[s_line + i])
			s_line++;
		if (s_line > 0)
		{
			arr[index++] = ft_malloc_word(s_line, (char *)&str[i]);
			i += s_line;
		}
		while ((char)str[i] && (char)str[i] == sep)
			i++;
	}
	arr[index] = 0;
	return (arr);
}
