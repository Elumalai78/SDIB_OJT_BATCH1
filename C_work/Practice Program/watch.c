#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
    while (1) {
        // Get current time
        time_t current_time;
        time(&current_time);

        // Convert time to string format
        char* time_string = ctime(&current_time);

        // Display time
        printf("The current time is: %s ", time_string);

        // Wait for one second
        sleep(60);
    }

    return 0;
}