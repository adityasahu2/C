#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(){
	int fd[2];
	pid_t pid;
	char write_child[] = "hello from child";
	char read_parent[100];
	pipe(fd);
	pid = fork();
	if(pid == 0){
		close(fd[0]);
		write(fd[1], write_child, strlen(write_child)+1);
		printf("Child process sent message : %s\n",write_child);		
		close(fd[1]);
	}
	else{
		close(fd[1]);
		read(fd[0], read_parent, sizeof(read_parent));
		printf("Parent process recieved message : %s\n",read_parent);		
		close(fd[0]);
	}
	return 0;
}
