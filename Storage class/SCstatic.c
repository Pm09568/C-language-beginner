#include<stdio.h>
void display();
int main(){
    display();
    display();
    display();
    return 0;

}
void display(){
     static int a=0;
    //auto int a=0;
    a++;
    printf("%d ",a);
}