#include<stdio.h>
#include<string.h>
struct student{
    int id;
    char name[100];
    float mark;
    struct dob{
        int day;
        int month;
        int year;
    };
    int number;
};
int main(){
    int n,i;
    //char name[100];
    printf("enter the number of students ");
    scanf("%d",&n);
    struct student si;
    si.id;
    //si.name;
    si.mark;
    si.number;
    struct dob mi;
    mi.day;
    mi.month;
    mi.year;
    
    for(int i=1;i<n;i++){
        char name[100];
        printf("for student %d\n",i);
        printf("id: ");
        scanf("%d",&si.id);
        printf("Name ");
        fgets((si.name),100,stdin);
        
        
         printf("mark: ");
        scanf("%f",&si.mark);
         printf("date of birth, day: ");
        scanf("%d",&mi.day);
        printf("date of birth, month: ");
        scanf("%d",&mi.month);
        printf("date of birth, year: ");
        scanf("%d",&mi.year);
        printf("number: ");
        scanf("%f",&si.number);
        printf("id:%d\n",si.id);
        
        printf("name: %s\n",si.name);
        printf("mark:%f\n ",si.mark);

printf("date of birth, day:%d\n ",mi.day);
 printf("date of birth, month:%d\n ",mi.month); 
 printf("date of birth, year:%d\n ",mi.year); 
 printf("number:%d",si.number); }

}