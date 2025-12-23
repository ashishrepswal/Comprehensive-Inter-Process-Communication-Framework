// Pipe IPC module implemented for parent-child communication
#include <stdio.h>
#include <unistd.h>
#include <string.h>
void pipe_demo(){
    int fd[2]; char buf[100]={0};
    pipe(fd);
    if(fork()==0){
        close(fd[0]);
        write(fd[1],"Hello from Pipe",16);
        close(fd[1]);
    } else {
        close(fd[1]);
        read(fd[0],buf,sizeof(buf));
        printf("[PIPE] %s\n",buf);
        close(fd[0]);
    }
}
