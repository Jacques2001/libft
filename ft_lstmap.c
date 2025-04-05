#include "libft.h"
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;
	t_list *current;
	t_list *node;

	new_lst = NULL;
	node = NULL;
	while(lst != NULL)
	{
		node = malloc(sizeof(t_list));
		if(node == NULL)
		{
			del(new_lst);
			return NULL;
		}
		node->content = f(lst->content);
		node->next = NULL;
		if(new_lst == NULL)
			new_lst = node;
		else
			current->next = node;
		current = node;
		lst = lst->next;
	}
	return new_lst;
}