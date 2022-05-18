#include "../../libft.h"
#include <stdio.h>

void	print_list(t_list **begin_list)
{
	t_list	*current;

	current = *begin_list;
	while (current)
	{
		printf("%d -> ", *(int *)current->content);
		current = current ->next;
	}
	printf("NULL\n");
}

void	*int_doubler(void *a)
{
	char *ret;
	int *num = a;

	ret = NULL;
	*num = *num * 2;
	return ((void *)ret);
}

void	free_fct(void *pouet)
{
	(void)pouet;
	printf("La data a bien ete free\n");
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
	print_list(&begin_list);
	printf("APRES : ");
	ft_lstmap(begin_list, &int_doubler, &free_fct);
	print_list(&begin_list);
}