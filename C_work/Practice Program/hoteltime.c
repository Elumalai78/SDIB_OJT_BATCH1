#include <stdio.h>
#include <time.h>

int main() {
    // Set menu prices

   float idli = 6, dosa = 25, vada = 15, samber = 20, Chutney =20, Upma =30, Poori = 15, Pongal = 30;
   float MalabarFishBiryani = 110, FishGassi = 80, meals = 120, biryani = 150;
   printf ("*** WELCOME TO 7 KILLS HOTEL ***");
   
    // Set timing-based discounts
    float discount_breakfast = 0.2;
    float discount_lunch = 0.1;
    float discount_dinner = 0.05;
    char meal;

    // Get current time
    time_t current_time;
    struct tm *local_time;

    current_time = time(NULL);
    local_time = localtime(&current_time);

    // Determine mealtime and discount
    float discount = 0.0;

    if (local_time->tm_hour >= 7 && local_time->tm_hour < 11) {
        printf("\n Good Morning! Breakfast is served.\n");
        discount = discount_breakfast;
    } else if (local_time->tm_hour >= 12.30 && local_time->tm_hour < 15.30) {
        printf("Good afternoon! Lunch is served.\n");
        discount = discount_lunch;}
        else if (local_time->tm_hour >= 15.30 && local_time->tm_hour < 19.00) {
        printf("Good evening! fresh juise and snacks served.\n");
        discount = discount_lunch;}
        else if (local_time->tm_hour >= 19.00 && local_time->tm_hour < 21.00) {
        printf("Good evening! Dinner is served.\n");
        discount = discount_lunch;}
     else {
        printf("Sorry please come tommoro.\n");
        discount = discount_dinner;
    }
     
    //char meal;
    printf("Menu:\n");
    printf("B - Breakfast\n");
    printf("L - Lunch\n");
    printf("D - Dinner\n");

    printf("Enter your choice (B/L/D): ");
    scanf(" %c", & meal);

    switch(meal) {
        case 'B':
        case 'b':
printf("1. Idli (Rs %.2f)\n", idli);
printf("2. Vada (Rs %.2f)\n", vada);
printf("3. Dosa (Rs %.2f)\n", dosa);
printf("4. Samber (Rs %.2f)\n", samber);
printf("5. Chutney (Rs %.2f)\n", Chutney );
printf("6. Poori(Rs %.2f)\n", Poori);
printf("7. Pongal (Rs %.2f)\n", Pongal);
            break;
        case 'L':
        case 'l':
            printf("1. Meals (Rs %.2f)\n", meals);
            printf("2. Biryani (Rs %.2f)\n", biryani);
            printf("3. MalabarFishBiryani (Rs %.2f)\n", MalabarFishBiryani);
            printf("4. FishGassi (Rs %.2f)\n", FishGassi);
            //printf("2. Biryani ($%.2f)\n", biryani);
            
            break;
        case 'D':
        case 'd':
            printf("1. Idli (Rs %.2f)\n", idli);
            printf("2. Vada (Rs %.2f)\n", vada);
            printf("3. Dosa (Rs %.2f)\n", dosa);
            printf("4. Poori (Rs %.2f)\n",Poori);
            break;
        default:
            printf("Invalid meal choice. Try again.\n");
            return 0;
    }

    int choice;
    int quantity = 0;
    float total_cost = 0.0;
   
    printf("Enter choice: ");
    scanf("%d", &choice);
    printf("Enter quantity: ");
    scanf("%d", &quantity);
switch(meal) {
        case 'B':
        case 'b':
         
            if (choice == 1) {            
                total_cost = quantity * idli;
            }
            else if (choice == 2) {
                total_cost = quantity * vada;
            }
            else if (choice == 3) {
                total_cost = quantity * dosa;
            }
             else if (choice == 4) {
                total_cost = quantity * samber;
            }
             else if (choice == 5) {
                total_cost = quantity * Chutney;
            }
             else if (choice == 6) {
                total_cost = quantity * Poori;
            }
             else if (choice == 7) {
                total_cost = quantity * Pongal;
            }
            break;
        case 'L':
        case 'l':
            if (choice == 1) {
                total_cost = quantity * meals;
            }
            else if (choice == 2) {
                total_cost = quantity * biryani;
            }
            else if (choice == 3) {
                total_cost = quantity * biryani;
            }
            break;
        case 'D':
        case 'd':
            if (choice == 1) {
                total_cost = quantity * idli;
            }
            else if (choice == 2) {
                total_cost = quantity * vada;
            }
            else if (choice == 3) {
                total_cost = quantity * dosa;
            }
            else if (choice == 4) {
                total_cost = quantity * Upma;
            }
            break;
        default:
            printf("Invalid meal choice. Try again.\n");
            return 0;
    }
}