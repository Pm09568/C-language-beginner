#include<stdio.h>
int main(){
    int a=10;
    int *pa;
    pa=&a;
    printf("%p",&(*pa));
    return 0;
}