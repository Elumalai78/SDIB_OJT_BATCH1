#include<stdio.h>
typedef struct
{
    int roll ,age;
    char name[30],gender;
}student;
int main()
{
    char ch;
    student s;
    FILE *fp;
    fp=fopen("stduent.dat","r");
    printf("\n enter the student details\n");
    while((fscanf(fp,"%d %[^\t]%d%c",&s.roll,s.name,&s.age,&s.gender))!=EOF)
    {
       printf("\n%5d %-20s %4d %1c ", s.roll, s.name, s.age, s.gender);

    }
printf("\n");
fclose(fp);
}