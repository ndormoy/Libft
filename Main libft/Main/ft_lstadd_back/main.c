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
	t_list *elem1;
	t_list *elem2;
	t_list *elem3;
	t_list *elem4;
	t_list *begin_list;
	t_list *begin_list2;
	/* t_list *test; */
	t_list *test2;

	elem1 = ft_lstnew("haha");
	elem2 = ft_lstnew("hoho");
	elem3 = ft_lstnew("hihi");
	elem4 = ft_lstnew("last");
	begin_list = elem1;
	elem1 ->next = elem2;
	elem2 ->next = elem3;
	elem3 ->next = NULL;

	/* test = ft_lstnew("pouet"); */
	test2 = ft_lstnew("dernier");
	begin_list2 = NULL;

	printf("AVANT : ");
	print_list(&begin_list);
	printf("APRES : ");
	ft_lstadd_back(&begin_list, elem4);
	print_list(&begin_list);

	printf("TEST QUAND LST NULLE : ");
	ft_lstadd_back(&begin_list2, test2);
	print_list(&begin_list2);

}