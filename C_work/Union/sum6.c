#include<stdio.h>
int main()
{
    union a
    {
        int i;
        char ch[3];

    };
    union a u;
    u.ch[0]=14;
    u.ch[1]=1;
    u.ch[1]=0;
    printf("%d %d %d %d\n", u.ch[0],u.ch[1],u.ch[2] ,u.i);
    return 0;
}