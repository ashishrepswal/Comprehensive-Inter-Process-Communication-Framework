#include <stdio.h>

#ifdef __APPLE__
void mq_demo() {
    printf("[MQ] POSIX Message Queue not supported on macOS headers\n");
}
#else
#include <mqueue.h>
#include <fcntl.h>
#include <string.h>

#define QUEUE_NAME "/ipc_queue"

void mq_demo() {
    mqd_t mq = mq_open(QUEUE_NAME, O_CREAT | O_WRONLY, 0644, NULL);
    mq_send(mq, "Hello Message Queue", 20, 0);
    mq_close(mq);
    printf("[MQ] Message Sent\n");
}
#endif

