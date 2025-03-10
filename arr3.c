//substraction and comparison between 2 pointers
#include<stdio.h>
int main (){
    int age=22;
    int _age=23;
    int *ptr1=&age;
    int *ptr2=&_age;
    printf("%u\n %u\ncomparison %d\n",ptr1,ptr2,ptr2-ptr1);
    //ptr2=&age;
    printf("comparison %u",ptr1==ptr2);
}