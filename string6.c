#include<stdio.h>
void name(char namee[],char ch);
int main(){
char namee[100];
char ch;
fgets(namee,100,stdin);
scanf("%c",&ch);
name(namee,ch);
}
void name(char namee[],char ch){int count=0;int i;
    for( i=0;namee[i]!='\0';i++){if(namee[i]==ch){
        count++;}}
    if(count>0){printf("%c is present in the word %d times",ch,count);}
    else{printf("%c is not present",ch);}
}
       
       
   
   

