#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char username[20] = "newuser"; // set initial username
    char password[20] = "newpass"; // set initial password

    printf("Enter username: ");
    char input_username[20];
    scanf("%s", input_username);

    printf("Enter password: ");
    char input_password[20];
    scanf("%s", input_password);

    if (strcmp(input_username, username) == 0 && strcmp(input_password, password) == 0) {
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
         if (strcmp(username, new_username) == 0 && strcmp(password, new_password) == 0){
        printf("Username and password updated successfully!\n");}
    } else {
        printf("Incorrect username or password. Please try again.\n");
    }

    return 0;
}