#include"stdio.h"

int main(){

    int i ,j,n,m;
printf("enter two number:");
scanf("%d%d",&n,&m);
    for(i=1;i<=10;i++){
        
            printf("%d %d\n",n*i,m*i);
    }
    return 0;
}