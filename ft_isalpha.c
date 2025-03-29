#include "libft.h"
int  ft_isalpha(int c)
{
  if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    return (1);
  else
    return (0);
}
/*
#include <stdlib.h>
#include <stdio.h>
int main()
{
  printf("%d\n", ft_isalpha('m'));
  return 0;
}*/
