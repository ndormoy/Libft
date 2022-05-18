#include "../../libft.h"
#include <stdio.h>

int main()
{
	int fd;
	int ret;
	char buf[100];

	fd = open("/Users/noedormoy/Documents/Code/42/libft/Main/ft_putendl_fd/test.txt", O_RDWR);
	ft_putendl_fd("Yo les bros c'est nono", fd);
	close (fd);
	fd = open("/Users/noedormoy/Documents/Code/42/libft/Main/ft_putendl_fd/test.txt", O_RDWR);
	ret = read(fd, buf, 100);
	buf[ret] = '\0';
	printf("%s", buf);

}