#include "../../libft.h"
#include <stdio.h>
#include <unistd.h>

int main()
{
	int fd;
	char buf_to_write[100] = "pouet";
	char buf_to_read[100];
	int ret;
	unsigned int i;

	i = 0;
	fd = open("/Users/noedormoy/Documents/Code/42/libft/Main/ft_putchar_fd/test.txt", O_RDWR);
	if (!fd)
		return (0);
	write(fd, buf_to_write, 5);
	close(fd);
	fd = open("/Users/noedormoy/Documents/Code/42/libft/Main/ft_putchar_fd/test.txt", O_RDWR);
	ret = read (fd, buf_to_read, 6);
	buf_to_read[ret] = '\0';
	printf("%s\n", buf_to_read);
	close (fd);

}