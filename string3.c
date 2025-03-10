//function to count vowel
#include<stdio.h>
void array(char arr[]);
void vouel(char ar[]);
int main(){char name[100];
fgets(name,100,stdin);
array(name);
vouel(name);
}
void array(char arr[]){
    int count;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }printf("%d\n",count-1);
}
void vouel(char ar[]){
    int count=0;
    for(int i=0;ar[i]!='\0';i++){
        if(ar[i]=='a'||ar[i]=='e'||ar[i]=='i'||ar[i]=='o'||ar[i]=='u'){
            count++;}
        
}printf("%d",count);}