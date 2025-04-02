#include "libft.h"
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t src_len;

	i = 0;
	src_len = ft_strlen(src);
	if(dstsize == 0)
		return src_len;
	while(src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return src_len;
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char src[] = "Hello Jacques how are you im fine thank you euhhhhhh";
	char dst[20];
	printf("%lu\n", strlcpy(dst, src, 20));
	printf("%zu\n", ft_strlcpy(dst, src, 20));
	return 0;
}*/