#include<stdio.h>
void display(int n);
int main(){
    int n;
    printf("enter number ");
    scanf("%d",&n);
    display(n);
    return 0;
}
void display(int n){
    printf(" octal =%o to convert Hexa value is =%x",n,n);
}