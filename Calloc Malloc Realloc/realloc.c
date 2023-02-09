#include<stdio.h>
#include<stdlib.h>
void main(){
    int n=4;
    int *p=(int *)malloc(4*sizeof(int));
    printf("enter number");
    for(int i=0;i<4;i++){
        scanf("%d",(p+i));
    }
    for(int i=0;i<4;i++){
        printf("%d ",*(p+i));
    }


   int *pp=(int *)realloc(p,sizeof(int));
 printf("\nenter number");
    for(int i=4;i<10;i++){
        scanf("%d",(pp+i));
    }
     for(int i=0;i<10;i++){
        printf("%d ",*(pp+i));
    }
}