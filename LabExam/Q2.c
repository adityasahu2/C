#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <string.h>

void writeToFile(int fd_main){
    char buffer[256];
    printf("Enter text:\n");
    while(fgets(buffer,sizeof(buffer),stdin)){
        if (strncmp(buffer, "END", 3) == 0) break;
        write(fd_main,buffer,strlen(buffer));
    }
}

void convertToUpper(int fd_in, int fd_out){
    char ch;
    ssize_t BR;
    while((BR = read(fd_in, &ch, 1)) > 0){
        ch = toupper(ch);
        write(fd_out, &ch, 1);
    }
}

void displayContent(int fd_disp){
    char ch;
    ssize_t BR;
    while((BR = read(fd_disp, &ch, 1)) > 0){
        printf("%c", ch);
    }
}

int main() {
    pid_t pid1, pid2;
    int fd_main;
    fd_main = open("textfile.txt", O_WRONLY, 0644);
    writeToFile(fd_main);
    close(fd_main);
    pid1 = fork();
    if(pid1 == 0){
        int fd_in,fd_out;
        fd_in = open("textfile.txt", O_RDONLY);
        fd_out = open("tempfile.txt", O_WRONLY);
        convertToUpper(fd_in,fd_out);
    }
    else{
        waitpid(pid1, NULL, 0);
        pid2 = fork();
        if(pid2 == 0){
            int fd_disp;
            fd_disp = open("tempfile.txt", O_RDONLY);
            displayContent(fd_disp);
        }
        else{
            waitpid(pid2, NULL, 0);
        }
    }
    return 0;
}