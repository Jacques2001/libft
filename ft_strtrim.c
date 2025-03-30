#include "libft.h"
char	*ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;
	int i;
	int x;
	char *str;

	x = 0;
	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	while(s1[start] == set[start] && start <= end)
		start++;
	while(s1[end] == set[x] && end >= 0)
	{
		end--;
		x++;
	}
	str = malloc(end - start + 1 * sizeof(char));
	if(str == NULL)
		return NULL;
	while(start < end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return str;
}

/*char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(s1 + end + 1));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	str = malloc(end - start + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
}*/
int main()
{
	char str[] = "123Hello321";
	char set[] = "321";
	printf("%s\n", ft_strtrim(str, set));
	return 0;
}