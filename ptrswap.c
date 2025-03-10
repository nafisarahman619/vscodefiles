#include<stdio.h>
int main(){
    int a=5;
    int b=10;
    

    
    int *ptr1=&a;
    int *ptr2=&b;
    int temp;

    
    printf("%d\n%d\n",*ptr1,*ptr2);

    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("%d\n%d\n",*ptr1, *ptr2);
}