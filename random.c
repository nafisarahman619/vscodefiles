#include<stdio.h> 
int minarray(int arr[],int size);
int main(){       
 int i=0,min=0;     
  int arr[]={4,5,7,3,8,9};//declaration of array     
 min=minarray(arr,6);//passing array with size     
 printf("minimum number is %d \n",min);     
 return 0;  }

int minarray(int arr[],int size){     
int min=arr[0];     
int i=0;     
 for(i=0;i<size;i++){     
if(arr[i]<min){     
 min=arr[i];     
 }     
}//end of for     
 return min;     
 }//end of function     
 