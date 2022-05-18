#include "../../libft.h"
#include <stdio.h>

void	print_list(t_list **begin_list)
{
	t_list *current;

	current = *begin_list;

	while (current)
	{
		printf("%s -> ", current->content);
		current = current->next;
	}
	printf("NULL\n");
}

int main()
{
	t_list *elem;
	t_list *elem2;
	t_list *elem3;
	t_list *begin_list;
	int lst_size;

	elem = ft_lstnew("pouet");
	elem2 = ft_lstnew("lol");
	elem3 = ft_lstnew("haha");
	begin_list = elem;
	ft_lstadd_front(&begin_list, elem2);
	ft_lstadd_front(&begin_list, elem3);
	print_list(&begin_list);
	lst_size = ft_lstsize(begin_list);
	printf("Taille liste = %d\n", lst_size);
}