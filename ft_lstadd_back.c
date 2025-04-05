#include "libft.h"
void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *ptr;

	ptr = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return;
	}
	while(ptr != NULL)
	{
		if(ptr->next == NULL)
		{
			ptr->next = new;
			return ;
		}
		ptr = ptr->next;
	}
}