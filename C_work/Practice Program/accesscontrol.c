#include<stdio.h>
#include<stdlib.h>
int elumalai(char[15],int);
void main()
{
    int pin=3211,username; 
    int user_input="Elumalai";
    
    printf("\nWelcome To Phytec\n");
       elumalai(username,pin);    
    }

int elumalai(char username[15],int pin)
{
     int user_input;
     printf("Enter The User Name\n");
     scanf("%d",user_input);
    again:
    printf("\nEnter The Pin\n");
    if(user_input==pin)
    {
      printf("****Hai Elumalai Welcome"); 
        
    }
    else if(user_input!=pin)
    {
        printf("\n Please try again.\n");
        goto again;
    }
    return 0;
}