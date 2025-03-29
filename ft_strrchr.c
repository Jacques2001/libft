#include "libft.h"
char *ft_strchr(const char *s, int c)
{
	char *str;
	int i;
	i = ft_strlen(s);
	str = (char *)s;
	while(i != 0)
	{
		if(str[i] == c)
			return &str[i];
		i--;
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
	char str[] = "Hallall Jcques";
	char c = '\0';
	char *resultat = ft_strrchr(str, c);
	printf("%s\n", resultat);
	printf("%s\n", strrchr(str, c));
	return 0;
}*/