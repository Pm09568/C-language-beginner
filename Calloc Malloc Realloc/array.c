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

}