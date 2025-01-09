#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    printf("p1 id:%d\n", getpid()); // p1

    int p2 = fork();
    if (p2 == 0) {
        // Inside p2
        printf("p2 id:%d p1id:%d\n", getpid(), getppid());

        int p3 = fork();
        if (p3 == 0) {
            // Inside p3
            printf("p3 id:%d p2id:%d\n", getpid(), getppid());

            // Create p4
            int p4 = fork();
            if (p4 == 0) {
                // Inside p4
                printf("p4 id:%d p3id:%d\n", getpid(), getppid());
                exit(0);
            }

            // Create p5
            int p5 = fork();
            if (p5 == 0) {
                // Inside p5
                printf("p5 id:%d p3id:%d\n", getpid(), getppid());
                exit(0);
            }

            // Create p6
            int p6 = fork();
            if (p6 == 0) {
                // Inside p6
                printf("p6 id:%d p3id:%d\n", getpid(), getppid());
                exit(0);
            }

            // Wait for p4, p5, and p6
            wait(NULL);
            wait(NULL);
            wait(NULL);
            exit(0);
        }

        // Wait for p3
        wait(NULL);
        exit(0);
    }

    // Wait for p2
    wait(NULL);
    return 0;
}