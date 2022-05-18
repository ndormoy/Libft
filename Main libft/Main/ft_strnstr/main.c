#include "../../libft.h"
#include <stdio.h>

int main()
{
	const char str[50] = "lorem ipsum dolor sit amet";
	const char to_find[15] = "dolor";

	printf("VRAIE FONCTION %s\n", strnstr(str, to_find, 18));
	printf("MA FONCTION %s\n", ft_strnstr(str, to_find, 18));
}