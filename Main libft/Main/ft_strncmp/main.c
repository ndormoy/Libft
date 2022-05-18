#include "../../libft.h"
#include <stdio.h>

int main()
{
	printf("VRAI FONCTION : %d\n", strncmp("abcdefgh", "abcdwxyz", 4));
	printf("MA FONCTION : %d\n", ft_strncmp("abcdefgh", "abcdwxyz", 4));
}