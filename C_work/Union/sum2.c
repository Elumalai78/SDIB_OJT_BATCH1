#include<stdio.h>
union unionjob
{
    char name [32];
    float salary;
    int workrno;
    }ujob;
    struct structjob
    {
    char name [32];
    float salary;
    int workrno;
    } sjob;
    int main()
    {
        printf("\n size of union = %ld bytes", sizeof(ujob));
        printf("\n size of structure = %ld bytes", sizeof(sjob));
        return 0;

    }