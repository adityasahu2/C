#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

#define FIFO_NAME "/tmp/myfifo"
int main(){
	char write_msg[] = "Hello from indipendent process 1";
	int fd = open(FIFO_NAME, O_WRONLY);
	write(fd, write_msg, strlen(write_msg)+1);
	printf("Process 1 sent message: %s\n",write_msg);
	close(fd);
	return 0;
}
