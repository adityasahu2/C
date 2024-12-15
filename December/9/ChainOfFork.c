#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    int n = 4;
    int rval = fork();
    while(n> 0){
        rval = fork();
        if(rval >0) {
            printf("Parent %d\n",getpid());
            break;
        }
        else printf("Child %d\n",getpid());
        n--;
    }
    return 0;
}
