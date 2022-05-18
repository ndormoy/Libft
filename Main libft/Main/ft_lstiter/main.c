#include "../../libft.h"
#include <stdio.h>

void	int_doubler(void *a)
{
	int *num = a;
	*num = *num * 2;
}

void	print_list_int(t_list **begin_list)
{
	t_list *current;

	current = *begin_list;
	while (current)
	{
		printf("%d -> ", *(int *)current->content);
		current = current ->next;
	}
	printf("NULL\n");
}

int main()
{
	t_list *elem1;
	t_list *elem2;
	t_list *elem3;
	t_list *begin_list;
	int n1 = 1;
	int n2 = 2;
	int n3 = 3;

	elem1 = ft_lstnew(&n1);
	elem2 = ft_lstnew(&n2);
	elem3 = ft_lstnew(&n3);
	begin_list = elem1;
	elem1 ->next = elem2;
	elem2 ->next = elem3;
	elem3 ->next = NULL;

	printf("AVANT : ");
	print_list_int(&begin_list);
	printf("APRES : ");
	ft_lstiter(begin_list, &int_doubler);
	print_list_int(&begin_list);
}