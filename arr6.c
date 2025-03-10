//Write a function to reverse an array
#include<stdio.h>
void reverse(int arr[],int n);
void printarray(int arr[],int n);

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

reverse(arr,n);
printarray(arr,n);

}
void reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstval=arr[i];
        int secondval=arr[n-i-1];
         arr[i]=secondval;
         arr[n-i-1]=firstval;
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

}