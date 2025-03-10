//write a function to print hot or cold with the given value by the user
#include<stdio.h>
void hotcold(float n);
int main()
    {float n;
        printf("enter temperature in celcius");
        scanf("%f",&n);
hotcold(n);
    }
void hotcold(float n){
    if(n>=25 && n<=30){
        printf("normal temperature");

    }else if(n>=30 && n<=35){printf("medium warm");}
    else if(n>35){printf("too hot");}
    else if(n<25 && n>=15){printf("medium cold");}
    else if(n<15){printf("too cold");}

    }

