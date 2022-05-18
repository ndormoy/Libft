#include "../../libft.h"
#include <stdio.h>

int main()
{
	char s[100] = "hey1je1suis1la";
	char c = '1';
	char **strs;
	unsigned int i;

	i = 0;
	strs = ft_split(s, c);
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
	return (0);
}