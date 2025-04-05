#include "libft.h"

int count_word(char const *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while(str[i])
	{
		if( (i == 0 && str[i] != c) || (str[i] != c && str[i - 1] == c))
			count++;
		i++;
	}
	return count;
}

int count_letter(char const *str, char c, int x)
{
	int i;

	i = 0;
	while(str[x] != c && str[x])
	{
		x++;
		i++;
	}
	return i;
}

void fill_split(char **split, char const *str, char c)
{
	int i;
	int x;
	int y;

	i = 0;
	x = 0;
	y = 0;
	while(str[y])
	{
		if((y == 0 && str[y] != c) || (str[y] != c && str[y - 1] == c))
		{
			while(str[y] != c && str[y])
				split[i][x++] = str[y++];
			split[i][x] = '\0';
			i++;
			x = 0;
		}
		else
			y++;
	}
	split[i] = NULL;
}

char **ft_split(char const *s, char c)
{
	int i;
	int x;
	char **split;

	i = 0;
	x = 0;
	split = malloc((count_word(s, c) + 1) * sizeof(char*));
	if(split == NULL)
		return NULL;
	while(s[x])
	{
		if((x == 0 && s[x] != c) || (s[x] != c && s[x - 1] == c))
		{
			split[i] = malloc((count_letter(s, c, x) + 1) * sizeof(char));
			if(split[i] == NULL)
				return NULL;
			i++;
		}
		x++;
	}
	fill_split(split, s, c);
	return split;
}

// int main()
// {
// 	char c = ' ';
//   char *array[] = {
//   ",Hello",
//   "Hello                    ",
//   "                hello              ",
//   "1 1 1 1 1 1 1  1 1  1 1 1 1  1 1  1 1 1 2",
//   "                                   !,,,,,,,,,,,",
//   "",
//   "Hello",
//   "Hello, World ! 42 ?",
//   "               Jacques  est  super fort   !!!! ",
// 	"lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse",
//   NULL
//   };
//   for(int i = 0; array[i] != NULL;i++ )
//   {
//     printf("============= TEST %d =================\n",i);
//     printf("string: [%s]\n",array[i]);
    
//     char **tab;
//     tab = ft_split(array[i], c);
//     printf("\nft_split:\n");
// 		int k = 0;
// 		while(tab[k] != NULL)
// 		{
// 			printf("tab[%d] = {%s}\n",k, tab[k]);
// 			k++;
// 		}
//   }
//   return 0;
// }