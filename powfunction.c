//make your own pow function
#include<stdio.h>
//#include<math.h>
int power(int num,int n);
int main (){
    int num,n;
    printf("enter number and power ");
    scanf("%d%d",&num,&n);
int pow=power(num,n);
   printf("%d",pow);
}
int power(int num,int n){int result=1;
    for(int i=1;i<=n;i++){result=result*num;
    


    }return result;
   // printf("%d",result);
}