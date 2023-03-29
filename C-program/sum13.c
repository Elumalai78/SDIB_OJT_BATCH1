#include<stdio.h>
int main()
{
    char ch;
    ch = 'A';
    printf("The letter is");
    printf("%c", ch >= 'A' && ch <= 'Z' ? ch + 'a' - 'A':ch);
    printf("Now the letter is");
    printf("%c\n", ch >= 'A' && ch <= 'Z' ? ch : ch + 'a' - 'A');
    return 0;
}