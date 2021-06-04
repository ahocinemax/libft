#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size);

int				main()
{
	char dest[] = "Lol le string\0 mange des chips de crevette";
	char src[] = " est rouge fluo";
	printf("%lu\n",ft_strlcat(dest, src, 29));
	printf("%s\n", dest);
	char dst_test[] = "Lol le string\0 mange des chips de crevette";
	printf("%u\n",strlcat(dst_test, src, 29));
	printf("%s\n", dst_test);
	return (0);
}
