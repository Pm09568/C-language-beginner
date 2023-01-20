#include<stdio.h>
void display();
int main(){
    int a=10;
    printf("value of a is = %d\n",a);
    {
        int a=20;
        printf("value of a = %d\n",a);
    }
    printf("value of a = %d\n",a);
    display();
  return 0;
}
void display(){
    auto int b=40;
    printf(" value of b= %d\n",b);
}