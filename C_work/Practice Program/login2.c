#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char username[20];
    char password[20];

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, "user123") == 0 && strcmp(password, "password123") == 0) {
        printf("Login successful!\n");
    } else {
        printf("Incorrect username or password. Please try again.\n");
    }

    return 0;
}