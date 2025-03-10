#include<stdio.h>


int sumofdigit(int n);

int main(){int n;
    printf("enter number ");
scanf("%d",&n);
    printf("sum is %d",sumofdigit(n));
}
int sumofdigit(int n){int sum=0;
while(n!=0){
    sum+=n%10;
    
    n/=10;
}return sum;
}