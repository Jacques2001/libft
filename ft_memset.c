#include "libft.h"
void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr;
	size_t i;
	ptr = (unsigned char *)b;
	i = 0;
	while(i < len)
	{
		ptr[i] = c;
		i++;
	}
	return b;
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "Hello Jacques";
	ft_memset(str, 'X', 5);
	
	printf("%s\n", str);
	return 0;
}*/