#include<stdio.h>
void display(int * , int *);
int main(){
    int a,b;
    printf("enter a , b = ");
    scanf("%d %d",&a,&b);
    printf("Before swapping\n ");
    printf("A is =%d\n B is = %d \n",a,b);
    display(&a,&b);
    printf("After swapping \n");
    printf("A is =%d\n B is = %d\n",a ,b);
    return 0;
}
void display(int *a,int *b){
   int c=0;
   c=*a;
   *a=*b;
   *b=c;
}