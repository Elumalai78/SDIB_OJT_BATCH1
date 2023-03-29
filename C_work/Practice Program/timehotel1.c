#include <stdio.h>
#include <time.h>

int main() {
    // Set menu prices
    float price_burger = 5.99;
    float price_fries = 2.99;
    float price_drink = 1.99;

    // Initialize variables
    int choice;
    int quantity_burger = 0;
    int quantity_fries = 0;
    int quantity_drink = 0;
    float total_cost = 0.0;

    // Get current time
    time_t now;
    time(&now);
    struct tm *local = localtime(&now);

    printf("Menu:\n");

    while (1) {
        // Display menu options
        printf("1. Burger ($%.2f)\n", price_burger);
        printf("2. Fries ($%.2f)\n", price_fries);
        printf("3. Drink ($%.2f)\n", price_drink);
        printf("4. Checkout\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter quantity: ");
            scanf("%d", &quantity_burger);
        }
        else if (choice == 2) {
            printf("Enter quantity: ");
            scanf("%d", &quantity_fries);
        }
        else if (choice == 3) {
            printf("Enter quantity: ");
            scanf("%d", &quantity_drink);
        }
        else if (choice == 4) {
            break;
        }
        else {
            printf("Invalid choice. Try again.\n");
        }
    }

    // Calculate total cost
    total_cost = quantity_burger * price_burger + quantity_fries * price_fries + quantity_drink * price_drink;

    // Display receipt with time
    printf("\n\n");
    printf("Hotel Name: XYZ Hotel\n");
    printf("Address: 123 Main St, Anytown USA\n");
    printf("Date: %02d/%02d/%d\n", local->tm_mon + 1, local->tm_mday, local->tm_year + 1900);
    printf("Time: %02d:%02d\n", local->tm_hour, local->tm_min);
    printf("------------------------------\n");
    printf("Item\tQuantity\tPrice\n");
    printf("Burger\t%d\t\t$%.2f\n", quantity_burger, quantity_burger * price_burger);
    printf("Fries\t%d\t\t$%.2f\n", quantity_fries, quantity_fries * price_fries);
    printf("Drink\t%d\t\t$%.2f\n", quantity_drink, quantity_drink * price_drink);
    printf("------------------------------\n");
    printf("Total:\t\t\t$%.2f\n", total_cost);
    printf("\nThank you for dining with us. Come again soon!\n");

    return 0;
}