#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
void fibonacci(int n){
	int a = 0, b = 1, c;
	printf("Fibonacci sequence for %d terms: ", n);
	for(int i = 0; i < n; i++){
		printf("%d ",a);
		c = a + b;
		a = b;
		b = c;
	}
	printf("\n");
}
int main() {
	int n;
	printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Invalid input\n");
        return 0;
    }
    pid_t p = fork();
    if (p < 0) {
        perror("Fork failed");
        return 1;
    }
    else if(p == 0){
    	printf("Child Process PID: %d\nGenerating Fibonacci series up to %d terms.\n", getpid(),n);
        fibonacci(n);
        exit(0);
    }
    else{
    	printf("Parent Process PID: %d\nWaiting for the child to finish.\n", getpid());
        wait(NULL); 
        printf("Parent Process: Child process executed.\n");
    }
 	return 0;
}
