#include "../../libft.h"
#include <stdio.h>

int main()
{
	char const s1[100] = "          ";
	char const set[3] = " ";
	char *ret;

	ret = ft_strtrim(s1, set);
	printf("%s\n", ret);

}
