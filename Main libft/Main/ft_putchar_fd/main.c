#include "../../libft.h"
#include <stdio.h>

int main()
{
	int fd;
	char buf[100];
	int ret;

	fd = open("/Users/noedormoy/Documents/Code/42/libft/Main/ft_putchar_fd/test.txt", O_RDWR);
	ft_putchar_fd('a', fd);
	close(fd);
	fd = open("/Users/noedormoy/Documents/Code/42/libft/Main/ft_putchar_fd/test.txt", O_RDWR);
	ret = read(fd ,buf, 1);
	buf[ret] = '\0';
	printf("%s", buf);
	close(fd);
	return (0);
}