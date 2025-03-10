#include<stdio.h>
int main (){
float itemprice[3];
printf("Enter price 1");
scanf("%f",&itemprice[0]);
printf("Enter price 2");
scanf("%f",&itemprice[1]);
printf("Enter price 3");
scanf("%f",&itemprice[2]);
itemprice[0]+=(itemprice[0]*.18);
itemprice[1]+=(itemprice[1]*.18);
itemprice[2]+=(itemprice[2]*.18);
printf("%f %f %f",itemprice[0],itemprice[1],itemprice[2]);

}