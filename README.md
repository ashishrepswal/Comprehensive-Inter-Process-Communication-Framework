## Security Testing
- Authentication token validation tested
- Unauthorized access attempts were blocked
- Semaphore ensured safe shared memory access
Comprehensive Inter-Process Communication Framework
Run:
make
./server
./client
Token: IPC_SECURE_123
## Testing
- FIFO tested using two terminals
- Shared memory tested with semaphore
## Validation Results
- Pipe IPC tested for parent-child communication
- FIFO tested using two separate terminals
- Shared memory tested with semaphore synchronization
- Unauthorized access attempts were blocked successfully
## System Architecture
The IPC framework follows a modular architecture consisting of:
- Client process for request initiation
- Authentication layer for access control
- IPC mechanism layer (Pipe, FIFO, Shared Memory)
- Synchronization using semaphores
- Server process for handling requests


