#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int x;
	char *str;

	i = 0;
	x = 0;
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (str == NULL)
		return NULL;
	while(s1[i])
		str[x++] = s1[i++];
	i = 0;
	while(s2[i])
		str[x++] = s2[i++];
	str[x] = '\0';
	return str;
}

int main()
{
	char s1[] = "Hello";
	char s2[] = "Jacques";
	printf("%s\n", ft_strjoin(s1, s2));
	return 0;
}