#include "../../libft.h"
#include <stdio.h>

void	print_list(t_list **begin_list)
{
	t_list *current;

	current = *begin_list;

	while(current)
	{
		printf("%s", current->content);
		current = current ->next;
	}
}

int main()
{
	t_list *begin_list;
	t_list *elem1;
	t_list *elem2;
	t_list *elem3;

	elem1 = ft_lstnew("hey");
	elem2 = ft_lstnew("noe");
	elem3 = ft_lstnew("cava?");

	elem1 ->next = elem2;
	elem2 ->next = elem3;
	elem3 ->next = NULL;
	begin_list = elem1;

	print_list(&begin_list);
}