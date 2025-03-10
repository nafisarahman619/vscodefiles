#include<stdio.h>
struct student{
    int age;
    int  roll;
    char name[100];
    int cgpa;
};
int main(){
    struct student s1={20,10,"nafisa",4.00};
    printf("%d",s1.roll);
}