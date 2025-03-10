#include<stdio.h>
void square(int *n);
int main(){int number = 4;
square(&number);
printf("%d\n",number);
    
}void square(int *n){
    *n=(*n)*(*n);
    printf("%d\n",*n);
}//ekhane direct pointer deoate function er kaj address e hoise.