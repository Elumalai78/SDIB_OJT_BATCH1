#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define GPIO_PIN_NUMBER 43
#define GPIO_PATH "/sys/class/gpio/gpio43"

void export_gpio() {
    int export_fd = open("/sys/class/gpio/export", O_WRONLY);
    if (export_fd < 0) {
        perror("Error exporting GPIO");
        exit(1);
    }

    char gpio_pin[43];
    snprintf(gpio_pin, sizeof(gpio_pin), "%d", GPIO_PIN_NUMBER);
    write(export_fd, gpio_pin, sizeof(gpio_pin));
    close(export_fd);
}

void set_gpio_direction(const char* direction) {
    char gpio_direction_path[43];
    snprintf(gpio_direction_path, sizeof(gpio_direction_path), "%s/direction", GPIO_PATH);

    int direction_fd = open(gpio_direction_path, O_WRONLY);
    if (direction_fd < 0) {
        perror("Error setting GPIO direction");
        exit(1);
    }

    write(direction_fd, direction, sizeof(direction));
    close(direction_fd);
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
    write(value_fd, &gpio_value, sizeof(gpio_value));
    close(value_fd);
}

int main() {
    export_gpio();
    set_gpio_direction("out");

    while (1) {
        set_gpio_value(1);  // LED ON
        sleep(1);
        set_gpio_value(0);  // LED OFF
        sleep(1);
    }

    return 0;
}

