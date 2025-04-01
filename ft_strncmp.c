#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while(i < n)
	{
		if(s1[i] == s2[i])
			i++;
		else
			return s1[i] - s2[i];
	}
	return 0;
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char s1[] = "Jacques";
	char s2[] = "Jcquese";
	printf("%d\n", ft_strncmp(s1, s2, 6));
	printf("%d\n", strncmp(s1, s2, 6));
	return 0;
}*/