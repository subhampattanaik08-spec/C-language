#include <stdio.h>

int main() {
    int password;
    char username;
    printf("Enter username: ");
    scanf (" %c", &username);
    printf("Enter password: ");
    scanf ("%d", &password);
    if (username == 'a' && password == 1234){
        printf("Login Successful\n");
    }
    else {
        printf("Login Failed : try again\n");
    }
    return 0;
}