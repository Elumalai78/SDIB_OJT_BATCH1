#include<stdio.h>
#include<stdlib.h>
int withdraw(char[15],int*,int);
int deposit(char[15],int*,int);
void checkbal(char[15],int*,int);
int account_balance=0;
void main()
{
    int pin=3211; //let 3211 be the pin for the particular account which the user wants to access.
    char acc_number[15]="XXXXXX7274";
    int choice;
    while(1)
    {
    recheck:
    printf("\nPress 1 to withdraw money from Account.\nPress 2 to deposit cash.\nPress 3 to check your balance.\nPress 4 to exit.\n");
    scanf("%d",&choice);
    switch(choice)
        {
        case 1:withdraw(acc_number,&account_balance,pin);break;
        case 2:deposit(acc_number,&account_balance,pin);break;
        case 3:checkbal(acc_number,&account_balance,pin);break;
        case 4:exit(0);break;
        default: printf("\nINVALID OPTION!\nTRY AGAIN!\n");
                 goto recheck;
        }
    }
}
int withdraw(char acc_number[15],int* account_balance,int pin)
{
    int user_input,amount,count=0,try;
    verify:
    printf("\nEnter the pin to withdraw cash\n");
    scanf("%d",&user_input);
    if(user_input==pin)
    {
        printf("\nEnter the amount you want to withdraw\n");
        scanf("%d",&amount);
        if(*account_balance<amount)
        {
            printf("\nNot enough account balance to withdraw the amount.\n");
        }
        else
        {
            printf("\nProcessing........................WITHDRAWN SUCCESSFULLY!!\n");
            printf("Your account %s has been debited by  %d Rupees",acc_number,amount);
            *account_balance=*account_balance-amount;
            printf("\n Your account %s has balance of %d Rupees.\n",acc_number,*account_balance);
        }
    }
    else if(user_input!=pin)
    {
        count++;
        try=4-count;
        printf("\nINCORRECT.\nYou have %d attempts left.",try);
        if(try==0)
        {
            printf("\nYour Account has been Temporarily Frozen.\nPlease contact your local bank branch to re-activate your account.\n");
            printf("ERROR: UNAUTHORISED ACCESS");
            exit(0);
        }
        goto verify;
    }
    return 0;
}
int deposit(char acc_number[15],int* account_balance,int pin)
{
     int amount,user_input;
    again:
    printf("\nEnter the pin to deposit cash\n");
    scanf("%d",&user_input);
    if(user_input==pin)
    {
        printf("\nEnter the amount you want to deposit\n");
        scanf("%d",&amount);
        printf("\nPlace your cash gently on the cash tray.\n");
        printf("\nProcessing........................DEPOSITED SUCCESSFULLY!!\n");
        printf("Your account %s has been credited by %d Rupees",acc_number,amount);
        *account_balance=*account_balance+amount;
        printf("\n Your account %s has balance of %d Rupees\n",acc_number,*account_balance);
    }
    else if(user_input!=pin)
    {
        printf("\n Please try again.\n");
        goto again;
    }
    return 0;
}
void checkbal(char acc_number[15],int* account_balance,int pin)
{
    int user_input;
    again1:
    printf("\nEnter the pin to view acc. balance\n");
    scanf("%d",&user_input);
    if(user_input==pin)
    {
        printf("\n Your account %s has balance of %d Rupees\n",acc_number,*account_balance);
    }
    else
    {
        printf("\n Please try again.\n");
        goto again1;
    }
}