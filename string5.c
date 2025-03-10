#include<stdio.h>
void slice(char name[],int n,int m);
int main(){
    char name[100];
    int n,m;
    fgets(name,100,stdin);
    scanf("%d %d",&n,&m);
    slice(name,n,m);
    }
void slice(char name[],int n,int m){
    for(int i=n;i<=m;i++){
        printf("%c",name[i]);
    }}