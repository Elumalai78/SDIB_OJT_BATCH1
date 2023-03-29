#include <stdio.h>  

enum directions{North=1, East, West, South};  

int main(){

    enum directions d;

    d=West;

    switch(d)
    {  
        case North:

        printf("We are headed towards North.");

        break;

        case East:

        printf("We are headed towards East.");

        break;

        case West:

        printf("We are headed towards West.");

        break;

        case South:

        printf("We are headed towards South");

        break;

    }

    return 0;

}