#include "libft.h"
char *ft_strdup(const char *s1)
{
	int i;
	char *str;

	i = 0;
	str = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (str == NULL)
		return NULL;
	while(s1[i])
	{
			str[i] = s1[i];
			i++;
	}
	str[i] = '\0';
	return str;
}

/*
#include <stdio.h>
int main()
{
	char str[] = "HEllo Jacques";
	printf("%s\n", ft_strdup(str));
	return 0;
}*/