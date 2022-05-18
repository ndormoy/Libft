#include "../../libft.h"
#include <stdio.h>

int main()
{
	const char s1[5] = "aaaa";
	const char s2[5] = "ahaa";

	printf("%d\n", memcmp(s1, s2, 3));
	printf("%d\n", ft_memcmp(s1, s2, 3));
	return (0);
}