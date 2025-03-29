#include "libft.h"
size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t i;
	size_t k;

	k = 0;
	i = ft_strlen(dst);
	while (src[k] && i < dstsize - 1)
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = '\0';
	return ft_strlen(dst) + ft_strlen(src);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char src[] = "Hello Jacques how are you im fine thank you euhhhhhh";
	char dst[60] = "Hop";
	printf("%lu\n", strlcat(dst, src, 20));
	printf("%zu\n", ft_strlcat(dst, src, 20));
	return 0;
}*/