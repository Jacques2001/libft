#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	size_t i;

	i = 0;
	str = (unsigned char *)s;
	if(n == 0)
		return NULL;
	while(i < n)
	{
		if(str[i] == (unsigned char) c)
			return &str[i];
		i++;
	}
	if(str[i] == c && i < n)
		return &str[i];
	return (NULL);
}

/*int main()
{
	char str[] = "bonjourno";
	char c = 'n';
	char *resultat = ft_memchr(str, c, 2);
	printf("%s\n", resultat);
	printf("%s\n", memchr(str, c, 2));
	return 0;
}*/