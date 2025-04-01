#include "libft.h"
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	while(src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return ft_strlen(src);
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