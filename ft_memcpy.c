#include "libft.h"
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	size_t i;

	i = 0;
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return dst;
}