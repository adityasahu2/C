#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#define FIFO_NAME"/temp/myfifo"
int main(){
	int fd;
	char buf[20];
	fd = open("temp.txt",O_RDONLY);
	read(fd, buf, 7);
	write(1, buf, 7);
	close(fd);
	unlink("temp.txt");
	return 0;
}
