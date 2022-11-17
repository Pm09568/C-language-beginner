#include <stdio.h>
// swapping two variable without third variable

int main() {
    int a,b;
    printf("enter a is:");
    scanf("%d",&a);
    printf("enter b is:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf(" after swappinf a is %d\n",a);
     printf(" after swappinf b is %d\n",b);
    return 0;
}