#include<stdio.h>
int main(){
    /*int row,col;
    for(row=1;row<=5;row++){if(row%2==0){
            for(col=1;col<=row;col++){
        printf("0");}}
        else{for(col=1;col<=row;col++){printf("1");}}printf("\n");
            
        }*/
        FILE *fptr;
        fptr= fopen("student.txt","w");
        char name[100];
        int age;
        float cgpa;
        printf("enter name ");
        scanf("%s",name);
        printf("enter age ");
        scanf("%d",&age);
        printf("enter cgpa ");
        scanf("%d",&cgpa);
        fprintf(fptr,"name is %s",name);
        fprintf(fptr,"age is %d",age);
        fprintf(fptr,"cgpa is %f",cgpa);
        fclose(fptr);
    
    }
