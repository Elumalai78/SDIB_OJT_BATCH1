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

        // Prompt user to change username and password
        char new_username[20];
        char new_password[20];

        printf("Enter new username: ");
        scanf("%s", new_username);

        printf("Enter new password: ");
        scanf("%s", new_password);

        // Update username and password
        strcpy(username, new_username);
        strcpy(password, new_password);

        printf("Username and password updated successfully!\n");
    } else {
        printf("Incorrect username or password. Please try again.\n");
    }

    return 0;
}