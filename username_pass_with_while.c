#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

void login(char username[], char password[]) {

  
}

int main() {
    char username[20];
    char password[20];
    printf("Enter your username: ");
    scanf("%s", username);
    printf("Enter your password: ");
    scanf("%s", password);
    login(username, password);
    return 0;
}
