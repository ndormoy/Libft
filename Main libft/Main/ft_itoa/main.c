#include "../../libft.h"
#include <stdio.h>

int main(int argc, char **argv )
{
	if (argc == 2)
	{
		printf("ItoA : %s\n", ft_itoa(atoi(argv[1])));
	}
	return 0;
}