#include "../../libft.h"
#include <stdio.h>

int main()
{
	char src[5] = "azzz";
	char c = 'a';

	printf("%s\n", ft_strrchr(src, c));
	return (0);
}