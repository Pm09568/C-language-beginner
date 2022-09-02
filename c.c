#include<stdio.h>

int main(int argc, char const *argv[])
{
 int age;
 printf("enter age : ");
 scanf("%d", &age);
 
 if (age > 18)
 {
    printf("adult \n");
    printf("they camn voten\n");
    printf("tey can drive \n");
 }
 else {
    printf("not adult \n");
 }
  
  return 0;
}