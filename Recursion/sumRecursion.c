#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("enter num ");
    scanf("%d",&n);

    sum(n);
    printf("%d",sum(n));
    return 0;
}
int sum(int n){
    
    if (n==0){
        return 1;
    }

       //int a= sum(n-1);
    return n+sum(n-1);
   // printf("%d ",b);
//return b;
}