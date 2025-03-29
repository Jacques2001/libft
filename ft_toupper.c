#include "libft.h"
int ft_toupper(int c)
{
	if(c >= 97 && c <= 122)
		c -= 32;
	return c;
}
/*
#include <stdio.h>
int main()
{
	char c = 'Z';
	printf("%c\n", ft_toupper(c));
	return 0;
}*/