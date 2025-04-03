#include "libft.h"
int ft_atoi(const char *str)
{
	int i;
	int n;
	int sign;
	i = 0;
	n = 0;
	sign = 1;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '+')
		i++;
	else if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + str[i] - 48;
		i++;
	}
	return n * sign;
}
