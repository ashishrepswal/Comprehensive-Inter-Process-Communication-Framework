#include <stdio.h>
#include "../security/auth.h"
int main(){
    char token[50];
    printf("Enter Security Token: ");
    scanf("%s",token);
    if(authenticate(token))
        printf("Access Granted\n");
    else
        printf("Access Denied\n");
    return 0;
}
