#include "../../libft.h"
#include <stdio.h>

int main()
{
	char buf[100];
	int fd;
	int ret;

	fd = open("/Users/noedormoy/Documents/Code/42/libft/Main/ft_putstr_fd/test.txt", O_RDWR);
	if(fd < 0)
		return 0;
	ft_putstr_fd("Yo les bros c'est noe", fd);
	close(fd);
	fd = open("/Users/noedormoy/Documents/Code/42/libft/Main/ft_putstr_fd/test.txt", O_RDWR);
	if(fd < 0)
		return 0;
	ret = read(fd, buf, 100);
	buf[ret] = '\0';
	printf("%s\n", buf);
	return (0);
	
}