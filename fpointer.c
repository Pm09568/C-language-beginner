#include<stdio.h>
void display(int *a ,int *b);
int main(){
    int a=10,b=20;
    printf("before swapping a=%d b=%d\n",a,b);
    display(&a,&b);
    printf("after swapping a=%d b=%d",a,b);
    return 0;
}
void display(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}