#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

void create_child(char name[]) {
 	pid_t id = fork();
	if (id == 0) {
		printf("%s process: PID = %d, Parent PID = %d\n", name, getpid(),getppid());
 		exit(0);
 	} else wait(NULL);
}
int main() {
	printf("P1 process: PID = %d\n", getpid());
 	pid_t p2 = fork();
 	if (p2 == 0) {
 		printf("P2 process: PID = %d, Parent PID = %d\n", getpid(), getppid());
 		pid_t p3 = fork();

	 	if (p3 == 0) {
			printf("P3 process: PID = %d, Parent PID = %d\n", getpid(), getppid());
			create_child("P4");
	 		create_child("P5");
	 		create_child("P6");
	 		exit(0);
	 	} 
	 	else wait(NULL);
	 	exit(0);
 	}
 	else wait(NULL);
 	return 0;
}
