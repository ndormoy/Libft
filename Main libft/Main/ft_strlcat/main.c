#include "../../libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
    char dest[10] = "hello";
    char src[4] = "hey";
    char dest2[10] = "hello";
    char src2[4] = "hey";

    printf("VRAIE FONCTION\n");
    printf("ret = %lu\n", strlcat(dest, src, 9));
    printf("dest = %s\n", dest);
    printf("MA FONCTION\n");
    printf("ret = %lu\n", ft_strlcat(dest2, src2, 9));
    printf("dest = %s\n", dest2);
}