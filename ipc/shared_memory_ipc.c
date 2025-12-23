#include <stdio.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>
#include <semaphore.h>
#include <string.h>
#define SHM_NAME "/ipc_shm"
#define SEM_NAME "/ipc_sem"
void shm_demo(){
    int fd=shm_open(SHM_NAME,O_CREAT|O_RDWR,0666);
    ftruncate(fd,1024);
    char *data=mmap(0,1024,PROT_WRITE,MAP_SHARED,fd,0);
    sem_t *sem=sem_open(SEM_NAME,O_CREAT,0644,1);
    sem_wait(sem);
    strcpy(data,"Hello Shared Memory");
    sem_post(sem);
    printf("[SHM] Data Written\n");
}
