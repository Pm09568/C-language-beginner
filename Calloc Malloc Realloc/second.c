#include<stdio.h>
#include<stdlib.h>
 void main(){
      int *p=(int *)malloc(sizeof(int));
      printf("enter number ");
      scanf("%d",p);
      printf("%d",*p);
      
 }