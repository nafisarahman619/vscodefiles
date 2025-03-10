#include<stdio.h>
int main(){
    int age=22;
    int *prt=&age;
   int _age=*prt;
   // printf("%u\n",&age);
    //printf("%u\n",ptr);
    printf("%d\n",*prt);
}