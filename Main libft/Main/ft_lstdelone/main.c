#include "../../libft.h"
#include <stdio.h>

void	ft_print_list(t_list **begin_list)
{
	while (*begin_list)
	{
		printf("%s -> ", (*begin_list)->content);
		*begin_list = (*begin_list)->next;
	}
}

void	free_fct(void *pouet)
{
	(void)pouet;
	printf("La data a bien ete free\n");
}

int main()
{
	t_list *begin_list, *elem1, *elem2, *elem3;

	elem1 = ft_lstnew("lol");
	elem2 = ft_lstnew("pouet");
	elem3 = ft_lstnew("salut");

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = NULL;

	begin_list = elem1;

	printf("AVANT :");
	ft_print_list(&begin_list);
	ft_lstdelone(elem3, &free_fct);
	printf("APRES :");
	ft_print_list(&begin_list);
}
