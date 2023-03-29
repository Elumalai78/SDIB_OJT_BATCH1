#include <stdio.h>

int main() {
    // Initialize variables
    char choice;
    int quantity = 0;
    float total_cost = 0.0;
    
    printf("Welcome to XYZ Hotel!\n");
    printf("Menu:\n");
    printf("B - Breakfast\n");
    printf("L - Lunch\n");
    printf("D - Dinner\n");
    
    printf("Enter meal choice (B/L/D): ");
    scanf("%c", &choice);

    switch(choice) {
        case 'B':
        case 'b':
            printf("Breakfast Menu:\n");
            printf("1. Idli ($2.99)\n");
            printf("2. Vada ($3.99)\n");
            printf("3. Dosa ($4.99)\n");
            break;
        case 'L':
        case 'l':
            printf("Lunch Menu:\n");
            printf("1. Meals ($5.99)\n");
            printf("2. Biryani ($8.99)\n");
            break;
        case 'D':
        case 'd':
            printf("Dinner Menu:\n");
            printf("1. Idli ($2.99)\n");
            printf("2. Vada ($3.99)\n");
            printf("3. Dosa ($4.99)\n");
            printf("4. Uthappam ($6.99)\n");
            break;
        default:
            printf("Invalid meal choice. Try again.\n");
            return 0;
    }

    int item_choice;
    printf("Enter item choice: ");
    scanf("%d", &item_choice);

    switch(choice) {
        case 'B':
        case 'b':
            switch(item_choice) {
                case 1:
                    total_cost = 2.99;
                    break;
                case 2:
                    total_cost = 3.99;
                    break;
                case 3:
                    total_cost = 4.99;
                    break;
                default:
                    printf("Invalid item choice. Try again.\n");
                    return 0;
            }
            break;
        case 'L':
        case 'l':
            switch(item_choice) {
                case 1:
                    total_cost = 5.99;
                    break;
                case 2:
                    total_cost = 8.99;
                    break;
                default:
                    printf("Invalid item choice. Try again.\n");
                    return 0;
            }
            break;
        case 'D':
        case 'd':
            switch(item_choice) {
                case 1:
                    total_cost = 2.99;
                    break;
                case 2:
                    total_cost = 3.99;
                    break;
                case 3:
                    total_cost = 4.99;
                    break;
                case 4:
                    total_cost = 6.99;
                    break;
                default:
                    printf("Invalid item choice. Try again.\n");
                    return 0;
            }
            break;
    }

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    total_cost *= quantity;

    printf("Total cost: $%.2f\n", total_cost);

    return 0;
}