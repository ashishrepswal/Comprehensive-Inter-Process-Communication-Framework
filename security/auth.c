#include <string.h>
#include "auth.h"
#define SECRET_TOKEN "IPC_SECURE_123"
int authenticate(const char *token){
    return strcmp(token, SECRET_TOKEN) == 0;
}
