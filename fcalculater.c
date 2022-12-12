/* Online C Compiler and Editor */
#include <stdio.h>
void calculater(int a , int b);
int main()
{
int a ,b;
printf("enter two number = ");
scanf("%d%d",&a,&b);
 calculater(a ,b);
    return 0;
}
void calculater(int a, int b){
int n;
printf("enter 1 for addition , \n ");
printf("enter 2 for subtraction , \n");
printf("enter 3 for multiplication , \n ");
printf("enter 4 for divide =  \n");
scanf("%d",&n);
    switch(n){
        case 1: printf("%d",a+b);
        break;
        case 2: printf("%d",a-b);
        break;
        case 3: printf("%d",a*b);
        break;
        case 4 :printf("%d",a/b);
        break;
        default: printf("enter valid num");
    }
}