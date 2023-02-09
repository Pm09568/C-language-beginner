// #include<stdio.h>
// #include<stdlib.h>
// void main(){
//     // int n=4;

//     int *p=(int *)calloc( 2,sizeof(int));
//     *p=10;
//     printf("%d",*p);
// }
#include<stdio.h>
#include<stdlib.h>
void main(){
    int n=4;
    int *p=(int *)calloc(4,sizeof(int));
    printf("enter number");
    for(int i=0;i<4;i++){
        scanf("%d",(p+i));
    }
    for(int i=0;i<4;i++){
        printf("%d ",*(p+i));
    }

}