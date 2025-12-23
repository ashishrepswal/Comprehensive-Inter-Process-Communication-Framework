#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#define FIFO_PATH "/tmp/ipc_fifo"
void fifo_demo(){
    mkfifo(FIFO_PATH,0666);
    int fd=open(FIFO_PATH,O_WRONLY);
    write(fd,"Hello FIFO",11);
    close(fd);
    printf("[FIFO] Message Sent\n");
}
