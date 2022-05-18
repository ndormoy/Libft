#include "../../libft.h"
#include <stdio.h>

int main()
{
	char src[50] = "salut bonjour bande de fous";
	char *ret;
	ret = ft_strdup(src);
	printf("ret = %s\n", ret);
}