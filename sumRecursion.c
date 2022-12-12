#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("enter num ");
    scanf("%d",&n);

    sum(n);
    //printf("%d",sum(n));
    return 0;
}
int sum(int n){
    if (n==1){
        return 1;
    }
    else{
        return n+sum(n-1);
    }
}