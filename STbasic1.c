#include<stdio.h>
int main(){
    struct student
    {
        char name[20];
        int age;
     } s1[2];
    for(int i=0;i<2;i++)
    {
    fflush(stdin);
    printf("enter name :");
    scanf("%[^\n]",&s1[i].name);
    printf("enter age :");
    scanf("%d",&s1[i].age);
    }
    for(int i=0;i<2;i++){
     printf("name %s\n",s1[i].name);
     printf("age %d\n",s1[i].age);
    }
     return 0;
}