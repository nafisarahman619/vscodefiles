//Write a program to find out the larger number using pointer
#include<stdio.h>
int main(){
    int a;
    int b;
    scanf("%d %d",&a,&b);
    int *ptr1=&a;
    int *ptr2=&b;
    if(*ptr1>*ptr2){
        printf("%d is bigger",a);
    }else{printf("%d is bigger",b);}
}