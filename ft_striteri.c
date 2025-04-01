#include "libft.h"
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;
	unsigned int len;
	
	i = 0;
	len = ft_strlen(s);
	if(!s)
		return ;
	while(i < len)
	{
		f(i, &s[i]);
		i++;
	}
}