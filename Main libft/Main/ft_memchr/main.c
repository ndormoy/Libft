#include "../../libft.h"
#include <stdio.h>

int main()
{
	char str[5] = "1234";
	int c = '3';

	printf("%s\n", ft_memchr(str, c, 4));
}