#include<stdio.h>
void swap(int a, int b);
void swab(int *a, int *b);
int main(){
    int x=3;
    int y=5;
   
    swap(x,y);
     printf("%d\n %d\n",x,y);
    swab(&x,&y);
    printf("%d\n %d\n",x,y);

}void swap (int a, int b){
    int t;
    t=a;
    a=b;
    b=t;
    printf("%d\n %d\n",a,b);
}void swab(int *a,int *b){
    int r;
    r=*a;
    *a=*b;
    *b=r;
     printf("%d %d",*a,*b);
}