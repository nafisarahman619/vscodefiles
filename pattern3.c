#include<stdio.h>
int main(){
    int n,row,col;
    scanf("%d",&n);
    for(row=1;row<=n;row++){for(col=1;col<=n-1-row;col++){
            printf(" ");}
        for
        (col=n;col>=1;col--){
            printf("%d",col);
    
        }
            printf("\n");
    }
}