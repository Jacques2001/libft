#include "libft.h"
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{	
	t_list *wagon;
	t_list *plan;
	t_list *la;

	plan = NULL;
	while(lst != NULL)
	{
		wagon = malloc(sizeof(t_list));
		if(wagon == NULL)
		{
			del(plan);
			return NULL;
		}
		wagon->content = f(lst->content);
		wagon->next = NULL;
		if(plan == NULL)
			plan = wagon;
		else
			la->next = wagon;
		la = wagon;
		lst = lst->next;
	}
	return plan;
}