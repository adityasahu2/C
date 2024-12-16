#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(){
	int fd[2];
	pid_t pid;
	char write_msg[] = "Hello from child";
	char read_msg[100];
	pipe(fd);
	write(fd[1],write_msg,strlen(write_msg)+1);
	read(fd[0],read_msg,sizeof(read_msg));
	printf("Parent print message\n");
	return 0;
}
