#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	size_t i;

	i = 0;
	str = (unsigned char *)s;
	while(i < n)
	{
		if(str[i] == (unsigned char) c)
			return &str[i];
		i++;
	}
	if(str[i] == c)
		return &str[i];
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char str[] = "H";
	char c = '\0';
	char *resultat = ft_memchr(str, c, 5);
	printf("%s\n", resultat);
	printf("%s\n", memchr(str, c, 5));
	return 0;
}*/