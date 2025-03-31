#include "libft.h"
char	*ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;
	int i;
	char *str;

	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	while(ft_strchr(set, s1[start]) != NULL && start <= end)
		start++;
	while(ft_strchr(set, s1[end]) != NULL && end >= 0)
		end--;
	str = malloc(end - start + 1 * sizeof(char));
	if(str == NULL)
		return NULL;
	while(start <= end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return str;
}

/*int main(int ac, char **av)
{
	(void)ac;
	char str[] = "oxoJaccquesooxxoooo";
	char set[] = "xo";
	printf("%s\n", ft_strtrim(str, set));
	return 0;
}*/