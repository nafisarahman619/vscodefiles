#include<stdio.h>
int evensum(int n);
int main(){
    int n;
    printf("enter n :");
    scanf("%d",&n);
    printf("sum of n numbered even is %d",evensum(n));}
    int evensum(int n){
        if (n==2){return 2;}
        int m=evensum(n-2);
        return n+m;
    }
