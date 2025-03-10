#include<stdio.h>
int main(){int n,sum=0,result;
    printf("enter number:");
    scanf("%d",&n);
    while(n!=0){sum=n%10;//last digit ta hobe main number k 10 diye vag korle vagshesh
    result+=sum;//sum 0 theke start hobe, last number ta add hobe
    n/=10;//main number ta 10 diye vaag korle int er karone last digit shore jabe..pore eta new n hobe r loop cholte thakbe

    


    }printf("sum %d",result);
}