#include <stdio.h>

void *ft_memcpy (void *dest, const void *src, size_t n);

int main()
{
	const char *src = "";
	char dest[] = "";

	

	printf("Src = %s\n", src);
	ft_memcpy(dest, src, 0);
	printf("Dest = %s\n", dest);
	return (0);
}
