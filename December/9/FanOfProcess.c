#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
	int n = 4;
    int rval = fork();
    while(n> 0){
        rval = fork();
        if(rval >0) printf("Parent %d\n",getpid());
        else {
        	printf("Child %d\n",getpid());
        	break;
        }
        n--;
    }
    return 0;
}
