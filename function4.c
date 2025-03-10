#include<stdio.h>
float farenheite(float n);
int main (){
    float n;
    printf ("enter celcius value :");
    scanf("%f",&n);
    printf("farenheite %f",farenheite(n));
}
float farenheite(float n){
    float f=((9*n)/5)+32;
    return f;
}