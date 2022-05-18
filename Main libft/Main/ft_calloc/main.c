 #include "../../libft.h"
 #include <stdio.h>
 #include <unistd.h>

 int main()
 {
	 char *ret;

	 ret = (char *)calloc(5, 1);
	 printf("%s\n", ret);
	 return (0);
 }