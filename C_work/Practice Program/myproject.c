#include <stdio.h>

int main() {
    // TIFFEN
    
    float price_burger = 5.99;
    float price_fries = 2.99;
    float price_drink = 1.99;

    // Initialize variables
    int choice;
    int quantity_burger = 0;
    int quantity_fries = 0;
    int quantity_drink = 0;
    float total_cost = 0.0;

    printf("*** WELCOME TO THE 7KILL HOTEL! ***\n");

    while (1) {
        // Display menu options
        printf("Menu:\n");
        printf("1. Burger ($%.2f)\n", price_burger);
        printf("2. Fries ($%.2f)\n", price_fries);
        printf("3. Drink ($%.2f)\n", price_drink);
        printf("4. Done ordering\n");

        // Prompt user for menu choice
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        if (choice == 1) {
            // Burger selected
            int quantity;
            printf("Enter quantity: ");
            scanf("%d", &quantity);
            quantity_burger += quantity;
            total_cost += price_burger * quantity;
        } else if (choice == 2) {
            // Fries selected
            int quantity;
            printf("Enter quantity: ");
            scanf("%d", &quantity);
            quantity_fries += quantity;
            total_cost += price_fries * quantity;
        } else if (choice == 3) {
            // Drink selected
            int quantity;
            printf("Enter quantity: ");
            scanf("%d", &quantity);
            quantity_drink += quantity;
            total_cost += price_drink * quantity;
        } else if (choice == 4) {
            // Done ordering
            printf("You ordered:\n");
            printf("%d burger(s)\n", quantity_burger);
            printf("%d fries(s)\n", quantity_fries);
            printf("%d drink(s)\n", quantity_drink);
            printf("Total cost: $%.2f\n", total_cost);
            break;
        } else {
            // Invalid choice
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}