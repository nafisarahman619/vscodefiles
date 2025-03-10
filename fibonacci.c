#include<stdio.h>
int fib(int n);
int main(){//int n;
   // printf("enter n :");
   // scanf("%d",&n);
     fib(6);
    return 0;
}
int fib(int n){
    if(n==0){return 0;}
if(n==1){return 1;}
    int fib1 =fib(n-1);
    int fib2 =fib(n-2);
    int fib3 =fib1+fib2;
    
    
     printf("series %d\n", fib3);
     
   return fib3;
}