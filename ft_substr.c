#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *str;

	i = 0;
	str = malloc((len + 1) * sizeof(char));
	if(str == NULL)
		return NULL;
	while(s[start])
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return str;
}
/*
int main()
{
	char str[] = "Hello Jacques";
	printf("%s\n", ft_substr(str, 6, 7));
}*/