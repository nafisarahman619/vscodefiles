#include <stdio.h>
void printarray(int arr[],int n);

int main (){
    int arr[]= { 1,2,3,4,5};
    printarray(arr,5);
}

void printarray(int arr[],int n){

    for(int i=0; i<5; i++){
        printf("%d\n",arr[i]);
    }
}