#include "libft.h"
void *ft_calloc(size_t count, size_t size)
{
	int i;
	void *tab;

	i = 0;
	tab = malloc(count * size);
	if(tab == NULL)
		return NULL;
	ft_memset(tab, 0, count);
	return tab;
}
/*
#include <stdio.h>
int main()
{
	printf("%s\n", ft_calloc(5, 4));
	return 0;
}*/