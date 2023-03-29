#include<stdio.h>
enum state {working=0,failed,ferzzed};
enum state currstate=2;
enum state findstate()
{
    return currstate;
}
int main()
{
(findstate()==working)?printf("NOT WORKING")
return 0;
}