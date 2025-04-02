#include "libft.h"
void *ft_calloc(size_t count, size_t size)
{
	void *tab;

	if (count != 0 && size > SIZE_MAX / count)
		return NULL;
	if(count == -2147483648 || count == 2147483647)
		return NULL;
	tab = malloc(count * size);
	if(tab == NULL)
		return NULL;
	ft_memset(tab, 0, count * size);
	return tab;
}
/*
#include <stdio.h>
int main()
{
	printf("%s\n", ft_calloc(5, 4));
	return 0;
}*/