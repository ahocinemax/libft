#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	if (!(dst) || !(src) || !(dstsize))
		return (0);
	len = ft_strlen(dst);
	i = 0;
	while (len < dstsize && src[i++])
	{
		dst[len++] = src[i];
	}
	dst[dstsize] = 0;
	return (len);
}

size_t	strlcat(char *dst, const char *src, size_t siz)
{
	char			*d;
	char			*s;
	int	n;
	int	dlen;

	d = dst;
	s = (char *)src;
	n = siz;
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = siz - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s));
	while (*s)
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}

int				main()
{
	char dest[] = "Lol le string\0 mange des chips de crevette";
	char src[] = " est rouge fluo";
	printf("%lu\n",ft_strlcat(dest, src, 20));
	printf("%s\n", dest);
	char dst_test[] = "Lol le string\0 mange des chips de crevette";
	printf("%lu\n", strlcat(dst_test, src, 20));
	printf("%s\n", dst_test);
	return (0);
}
