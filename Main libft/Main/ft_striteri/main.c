#include "../../libft.h"
#include <stdio.h>

void my_func(unsigned int i, char *str)
{
	str[i] = 'a';
	printf("str[%d] = %c\n", i, str[i]);
}

int main()
{
	char cpy[7] = "hello";
	
	
	printf("The result is %s\n", cpy);
	ft_striteri(cpy, my_func);
	printf("The result is %s\n", cpy);
	return 0;
}