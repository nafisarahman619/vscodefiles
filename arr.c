#include <stdio.h>

int main() {
    int age=22;
    int *ptr=&age;
    int _age=*ptr;
    printf("%u\n",ptr);
    ptr++;
    printf("%u\n",ptr);
    printf("%d\n",*ptr);
}
//ekhane ptr increment korle prt e jei address stored ase oita change hoye 4 byte bere jay. tai 
//jokhon _age=*ptr age declare na kora thake tokhon oi ptr er adress e jei value ase oita compiler print kore na
//adding something