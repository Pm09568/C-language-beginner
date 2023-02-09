#include<stdio.h>
int sum(int a ,int b);
int main(){
    int a=5,b=10;
    sum(a,b);
    printf("%d",sum(a,b));

    return 0;
}
int sum(int a ,int b){
      int s =a+b;
    return s;
    
}