#include<stdio.h>
void opration(int,int,int(*fnptr)(int,int));
int main()
{
    char choice ;
    int a=10, b=20;
    switch(choice)
    {
        case '+':
        
        opration(a,b,add);
        break;
        
        case '-':
        opration(a,b,sub);
        break;
        case '*':
        opration(a,b,mul);
        break;
        case '/':
        opration(a,b,div);
        break;
        defualt:
            printf("\nInvalid choice");
    }
}
void opration(int x,int y,int(*fnptr)(int,int))
{
    int result;
    result=fnptr(x,y);
printf("Result:%d",result);

}
