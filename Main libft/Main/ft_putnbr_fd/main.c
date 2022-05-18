#include "../../libft.h"
#include <stdio.h>

int main()
{
	int fd;
	int ret;
	char buf[15];

	fd = open("/Users/noedormoy/Documents/Code/42/libft/Main/ft_putnbr_fd/test.txt", O_RDWR);
	ft_putnbr_fd(-2147483648LL, 2);
	close(fd);
	fd = open("/Users/noedormoy/Documents/Code/42/libft/Main/ft_putnbr_fd/test.txt", O_RDWR);
	ret = read(fd, buf, 15);
	buf[ret] = '\0';
	printf("%s\n", buf);
}