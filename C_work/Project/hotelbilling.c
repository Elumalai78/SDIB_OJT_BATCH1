
#include <stdio.h>

int main()
{
    int ch, qty, i, net = 0;
elumalai:
    printf("\n\tMENU CARD");
    printf("\n\t\t1.COFFEE        Rs:15");
    printf("\n\t\t2.TEA           Rs:10");
    printf("\n\t\t3.COLD COFFEE   Rs:25");
    printf("\n\t\t4.MILK SHAKE    Rs:50");
    printf("\n\t\t5.APPALE JUICE   Rs:40");
    printf("\n\t\t6.GRAPE JUICE    Rs:45");
    printf("\n\t\t7.LEMON JUICE   Rs:20");
    printf("\n\t\t8.MANGO JUICE   Rs:30");
    printf("\n\n Enter Your choice  : ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("\nYou have selected Coffee");
        printf("\nEnter The Qty : ");
        scanf("%d", &qty);
        net = net + (qty * 15);
        
        break;
    case 2:
        printf("\nYou have selected Tea");
        printf("\nEnter The Qty : ");
        scanf("%d", &qty);
        net = net + (qty * 10);
        
        break;
    case 3:
        printf("\nYou have selected Cold Coffee");
        printf("\nEnter The Qty : ");
        scanf("%d", &qty);
        net = net + (qty * 25);
        
        break;
    case 4:
        printf("\nYou have selected Milk Shake");
        printf("\nEnter The Qty : ");
        scanf("%d", &qty);
        net = net + (qty * 50);

        case 5:
        printf("\nYou have selected APPALE JUICE");
        printf("\nEnter The Qty : ");
        scanf("%d", &qty);
        net = net + (qty * 40);
       
        break;

         case 6:
        printf("\nYou have selected GRAPE JUICE");
        printf("\nEnter The Qty : ");
        scanf("%d", &qty);
        net = net + (qty * 45);
       
        break;

         case 7:
        printf("\nYou have selected LEMON JUICE");
        printf("\nEnter The Qty : ");
        scanf("%d", &qty);
        net = net + (qty * 20);
       
        break;

         case 8:
        printf("\nYou have selected MANGO JUICE");
        printf("\nEnter The Qty : ");
        scanf("%d", &qty);
        net = net + (qty * 30);
       
        break;
    default:
        printf("\nInvalid Product Selection");
        break;
    }
    printf("\n do you want to countinue: press 1:");
    scanf("%d", &i);
    if (i == 1)
    {
        goto elumalai;
    }
    printf("\nTotal amount : %d", net);
    printf("\n THANK YOU COME AGAIN");
    return 0;
}
