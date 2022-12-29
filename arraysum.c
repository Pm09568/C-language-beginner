#include"stdio.h"
int main(){
    int n[5],i,sum=0;
    printf("enter number ");
    for( i=0;i<5;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<5;i++){
     sum = sum +n[i];
    }
    printf("%d",sum);
    return 0;
    }
    // int num[5]={1,2,3,4,5};
    // int i,sum=0 ;
    // for (i=0;i<5;i++){
    //   sum=sum+num[i];
    // }
    // printf("%d",sum);