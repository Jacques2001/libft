#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <stddef.h>

void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

int main()
{
	char str[] = "ABCDEFG";
	memcpy(str + 1, str, 5);
	printf("%s\n", str);	
	printf("%s\n", ft_memcpy(str + 1, str, 5));
	return 0;
}