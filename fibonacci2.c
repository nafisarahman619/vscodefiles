#include<stdio.h>
int main (){
int n,a=0,b=1,nextterm=0;
printf("enter n:");
scanf("%d",&n);
for(int i=1;i<=n;++i){
    if(i==1){
        printf("%d",a);
    }else if (i==2){
        printf("%d",b);

    }else{
        nextterm=a+b;
        a=b;
        b=nextterm;
        printf("%d",nextterm);
    }
}//printf("%d",nextterm);
}
