//array is a pointer. we can print the number of n values using pointer increment/decrement
#include<stdio.h>
int main(){
    int marks[10];
    //for input
    int *ptr=&marks[0];
    for(int i=0;i<10;i++)
    {printf("%d index ",i);
    scanf("%d",(ptr+i));}//ei line e & use kori nai karon ptr+i nijei ekta address
    //for output
    for(int i=0;i<10;i++){
        printf("%d index value is %d\n",i, *(ptr+i));
    }
}