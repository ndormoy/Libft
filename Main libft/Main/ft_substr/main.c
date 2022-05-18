#include "../../libft.h"
#include <stdio.h>

int main()
{
	const char *str = "Hello noe tu vas bien ?";
	char *ret;

	ret = ft_substr(str, 4, 7);
	printf("%s\n", ret);
}
