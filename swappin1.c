#include <stdio.h>
// swapping number with third variable 

int main() {
    int a,b,c;
    printf("enter a is:");
    scanf("%d",&a);
    printf("enter b is:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf(" after swappinf a is %d\n",a);
     printf(" after swappinf b is %d\n",b);
    return 0;
}