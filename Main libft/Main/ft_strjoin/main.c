#include "../../libft.h"
#include <stdio.h>

int main()
{
	char const *s1 = "";
	char const *s2 = "asd";
	char *ret;

	ret = ft_strjoin(s1, s2);
	printf("%s\n", ret);

}