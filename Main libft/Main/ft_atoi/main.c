#include "../../libft.h"
#include <stdio.h>

int main()
{
	char tab[100] = "  	+-12a3abc";
	printf("VRAI FONCTION %d\n", atoi(tab));
	printf("MA FONCTION %d\n", ft_atoi(tab));
}
