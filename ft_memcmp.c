#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *str1;
	unsigned char *str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while(i < n && str1[i])
	{
		if(str1[i] == str2[i])
			i++;
		else
			return str1[i] - str2[i];
	}
	return str1[i] - str2[i];
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char s1[] = "Hello";
	char s2[] = "HellO";
	int resultat = ft_memcmp(s1, s2, 5);
	printf("%d\n", resultat);
	printf("%d\n", memcmp(s1, s2, 5));
	return 0;
}*/