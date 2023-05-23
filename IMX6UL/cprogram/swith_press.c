#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#define GPIO_PIN_NUMBER 43
#define GPIO_PATH "/sys/class/gpio/gpio43"
#define SWITCH_PIN_NUMBER 40
#define SWITCH_PATH "/sys/class/gpio/gpio40"

void export_gpio() {
    int export = open("/sys/class/gpio/export", O_WRONLY);
    if (export < 0) {
        perror("Error exporting GPIO");
        exit(1);
    }

    char gpio_pin[43];
    snprintf(gpio_pin, sizeof(gpio_pin), "%d", GPIO_PIN_NUMBER);
    write(export, gpio_pin, strlen(gpio_pin));
    close(export);
}

void export_switch() {
    int export = open("/sys/class/gpio/export", O_WRONLY);
    if (export < 0) {
        perror("Error exporting GPIO");
        exit(1);
    }

    char switch_pin[40];
    snprintf(switch_pin, sizeof(switch_pin), "%d", SWITCH_PIN_NUMBER);
    write(export, switch_pin, strlen(switch_pin));
    close(export);
}

void set_gpio_direction(const char* direction) {
    char gpio_direction_path[43];
    snprintf(gpio_direction_path, sizeof(gpio_direction_path), "%s/direction", GPIO_PATH);

    int direction_fd = open(gpio_direction_path, O_WRONLY);
    if (direction_fd < 0) {
        perror("Error setting GPIO direction");
        exit(1);
    }

    write(direction_fd, direction, strlen(direction));
    close(direction_fd);
}

void set_switch_direction(const char* direction) {
    char switch_direction_path[40];
    snprintf(switch_direction_path, sizeof(switch_direction_path), "%s/direction", SWITCH_PATH);

    int direction_fd = open(switch_direction_path, O_WRONLY);
    if (direction_fd < 0) {
        perror("Error setting GPIO SWITCH direction");
        exit(1);
    }

    write(direction_fd, direction, strlen(direction));
    close(direction_fd);
}

int read_switch_value() {
    char switch_value_path[40];
    snprintf(switch_value_path, sizeof(switch_value_path), "%s/value", SWITCH_PATH);

    int value_fd = open(switch_value_path, O_RDONLY);
    if (value_fd < 0) {
        perror("Error reading GPIO switch value");
        exit(1);
    }

    char switch_value;
    read(value_fd, &switch_value, 1);
    close(value_fd);

    return switch_value == '1' ? 1 : 0;
}

void set_gpio_value(int value) {
    char gpio_value_path[43];
    snprintf(gpio_value_path, sizeof(gpio_value_path), "%s/value", GPIO_PATH);

    int value_fd = open(gpio_value_path, O_WRONLY);
    if (value_fd < 0) {
        perror("Error setting GPIO value");
        exit(1);
    }

    char gpio_value = value ? '1' : '0';
    write(value_fd, &gpio_value, 1);
    close(value_fd);
}

int main() {
    export_gpio();
    set_gpio_direction("out");
    export_switch();
    set_switch_direction("in");

    int previous_switch_state = 0;
    int current_switch_state;

    while (1) {
        current_switch_state = read_switch_value();

        if (current_switch_state != previous_switch_state) {
            if (current_switch_state == 1) {
                set_gpio_value(1);  // LED ON
            } else {
                set_gpio_value(0);  // LED OFF
            }
        }

        previous_switch_state = current_switch_state;
        usleep(10000);  // Delay for 10 milliseconds
    }

    return 0;
}

