#include<stdio.h>
void display();
int main(){
    register int a=10;
    printf("%d \n",a);
    display();
    return 0;

}
void display(){
    register int a=20;
    printf("%d",a);
}