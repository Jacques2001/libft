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
			d[len - 1] = s[len - 1];
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

/*int main()
{
	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
	printf("%s\n", ft_memmove(sResult + 1, sResult, 2));
	printf("%s\n", memmove(sResult + 1, sResult, 2));
	return 0;
}*/