#include "libft.h"
char *ft_strchr(const char *s, int c)
{
	char *str;
	int i;
	i = 0;
	str = (char *)s;
	while(str[i])
	{
		if(str[i] == c)
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
	char str[] = "Hello Jacques";
	char c = 'a';
	char *resultat = ft_strchr(str, c);
	printf("%s\n", resultat);
	printf("%s\n", strchr(str, c));
	return 0;
}*/