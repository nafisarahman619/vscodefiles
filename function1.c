#include<stdio.h>
void greet();
char ch;


int main (){
    
    
     greet();
    return 0;
    
}
void greet(){
    printf("ENTER 'i' if you're Indian.\n Enter 'f' if you're french ");
scanf("%c",&ch);
    if(ch =='i'){printf("Namaste");}
    else if(ch=='f'){printf("bonjour");}}