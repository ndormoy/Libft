#include "../../libft.h"
#include <stdio.h>

void	print_list(t_list **begin_list)
{
	t_list *current;

	current = *begin_list;
	while(current)
	{
		printf("%s -> ", current ->content);
		current = current ->next;
	}
	printf("NULL\n");
}

int main()
{
	t_list *elem;
	t_list *elem2;
	t_list *elem3;
	t_list *begin_list;
	t_list *last_elem;

	elem = ft_lstnew("ok");
	elem2 = ft_lstnew("mdr");
	elem3 = ft_lstnew("dernier");
	begin_list = elem;
	elem ->next = elem2;
	elem2 ->next = elem3;
	elem3 ->next = NULL;

	last_elem = ft_lstlast(begin_list);
	print_list(&begin_list);
	printf("%s\n", last_elem->content);
}