//write a function to count the numbers of odd numbers in an array
#include<stdio.h>
void countnumber(int arr[],int n);

int main(){ int n;
printf("Enter index number ");
scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("%d index ",i);
        scanf("%d",&arr[i]);
    }countnumber(arr,n);
}
void countnumber(int arr[],int n){int count;
    for(int i=0;i<n;i++){if(arr[i]%2!=0){
        count++;
    }
    }printf("odd number is %d",count);
}