#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
int main(){
	pid_t id;
	printf("Parent process: %d\n",getpid());
	id = fork();
	if (id < 0 ){
 		printf("\nfork failed\n");
 		exit(-1);
 	}
 	if(id > 0){
 	sleep(15);
 		printf("Child process created: %d\n",id);
		printf("Parent process exited\n");
 	}
 	else{
 		sleep(5);
 		printf("child process id: %d\n",getpid());
 		printf("Child process created by: %d\n",getppid());
	}
	return 0;
}
