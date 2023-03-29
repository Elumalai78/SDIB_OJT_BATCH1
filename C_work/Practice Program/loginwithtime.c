#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    // Set initial username and password
    char username[20] = "user123";
    char password[20] = "password123";

    // Get current time
    time_t current_time;
    time(&current_time);

    // Convert time to string format
    char* time_string = ctime(&current_time);

    printf("Welcome to the login system!\n");
    printf("Current time: %s", time_string);

    while (1) {
        // Prompt user for login credentials
        char input_username[20];
        char input_password[20];

        printf("Enter username: ");
        scanf("%s", input_username);

        printf("Enter password: ");
        scanf("%s", input_password);

        // Check login credentials
        if (strcmp(input_username, username) == 0 && strcmp(input_password, password) == 0) {
            printf("Login successful!\n");

            // Get current time
            time_t current_time;
            time(&current_time);

            // Convert time to string format
            char* time_string = ctime(&current_time);

            printf("Current time: %s", time_string);

            break;
        } else {
            printf("Incorrect username or password. Please try again.\n");
        }
    }

    return 0;
}