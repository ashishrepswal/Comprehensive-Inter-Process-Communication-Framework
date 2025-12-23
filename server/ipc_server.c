#include <stdio.h>
void pipe_demo();
void fifo_demo();
void mq_demo();
void shm_demo();
int main(){
    printf("=== IPC SERVER STARTED ===\n");
    pipe_demo();
    fifo_demo();
    mq_demo();
    shm_demo();
    return 0;
}
