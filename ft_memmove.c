#include "libft.h"
void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	const unsigned char *s;
	size_t i;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	if(src < dst)
	{
		while(len > 0)
		{
			d[len] = s[len];
			len--;
		}
	}
	else
	{
		while(i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return dst;
}