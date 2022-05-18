#include <string.h>
#include <stdio.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size);

int main()
{
    char dest[6] = "salut";
    char src[10] = "lol";
    char dest2[6] = "salut";
    char src2[10] = "lol";

    printf("VRAIE FONCT\n");
    printf("Taille = %lu\n", strlcpy(dest, src, 5));
    printf("dest all = %s\n", dest);
    printf("%c\n", dest[4]);
    printf("MA FONCT\n");
    printf("Taille = %lu\n", ft_strlcpy(dest2, src2, 5));
    printf("dest all = %s\n", dest2);
    printf("%c\n", dest2[4]);
    

}