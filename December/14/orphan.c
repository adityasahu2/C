#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
	pid_t id;
 	printf("Parent Process :%d\n",getpid());
 	id = fork();
 	if (id < 0){
 		printf("fork failed\n");
 		exit(-1);
 	}
 	if(id > 0){
 		sleep(15);
 		printf("Parent process exited\n");
 		return (0);
 	}else{ 
 		printf("Child process executing\n");
 		sleep(30);
 		printf("I am child process, id value is (%d)\n",id) ;
 		printf("Child process id is (%d)\n",getpid());
	}
 	return 0;
} 
