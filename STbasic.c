#include<stdio.h>
int main(){
    struct basic
    {
        char name[20];
        int age;
    }s1;
    printf("enter name :");
    scanf("%[^\n]",s1.name);
    
    printf("enter age :");
    scanf("%d",&s1.age);
    
     printf("name %s\n",s1.name);
     printf("age %d\n",s1.age);

     return 0;
}