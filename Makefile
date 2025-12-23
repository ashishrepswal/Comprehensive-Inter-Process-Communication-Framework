CC = gcc
CFLAGS = -Wall

all: server_app client_app

auth.o:
	$(CC) -c security/auth.c

pipe_ipc.o:
	$(CC) -c ipc/pipe_ipc.c

fifo_ipc.o:
	$(CC) -c ipc/fifo_ipc.c

shared_memory_ipc.o:
	$(CC) -c ipc/shared_memory_ipc.c

msg_queue_ipc.o:
	$(CC) -c ipc/msg_queue_ipc.c

server_app: auth.o pipe_ipc.o fifo_ipc.o shared_memory_ipc.o msg_queue_ipc.o
	$(CC) server/ipc_server.c auth.o pipe_ipc.o fifo_ipc.o shared_memory_ipc.o msg_queue_ipc.o -o server_app

client_app: auth.o
	$(CC) client/ipc_client.c auth.o -o client_app

clean:
	rm -f *.o server_app client_app

