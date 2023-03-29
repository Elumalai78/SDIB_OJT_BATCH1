#include <stdio.h>
#include <string.h>

int main() {
    char username[20];
    char password[20];
    int loginAttempts = 3;

    while (loginAttempts > 0) {
        printf("Enter username: ");
        scanf("%s", username);
        printf("Enter password: ");
        scanf("%s", password);

        // Check if username and password are correct
        if (strcmp(username, "myusername") == 0 && strcmp(password, "mypassword") == 0) {
            printf("Login successful!\n");
            break;
        } else {
            loginAttempts--;
            printf("Invalid username or password. You have %d login attempts left.\n", loginAttempts);
        }
    }

    if (loginAttempts == 0) {
        printf("Login failed. No more attempts left.\n");
    }

    return 0;
}