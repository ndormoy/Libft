#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t len);

int main()
{
    char dest[4] = "lol";
    const char src[6] = "salut";

    printf("%s\n", dest);

    ft_memmove(dest, src, 4);

    printf("%s\n", dest);

    return (0);    
}