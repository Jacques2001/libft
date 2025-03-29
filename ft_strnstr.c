#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t k;
	size_t start;

	i = 0;
	if(needle[i] == '\0')
		return (char *)haystack;
	while(haystack[i] && i < len)
	{
		k = 0;
		start = i;
		while(haystack[i] == needle[k] && i < len)
		{
			i++;
			k++;
			if(needle[k] == '\0')
				return (char *)&haystack[start];
		}
		i++;
	}
	return NULL;
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char hay[] = "Hello Jacques";
	char needle[] = "Ja";
	printf("%s\n", ft_strnstr(hay, needle, 7));
	printf("%s\n", strnstr(hay, needle, 7));
	return 0;
}*/