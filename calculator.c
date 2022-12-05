#include<stdio.h>
void main()
{
    float a,b;
    int count;
    char c;
do
{
    printf("enter two number");
    scanf("%d%d",&a,&b);
   fflush(stdin);
    printf("enter the operator + - * /");
    scanf("%c",&c);
    switch(c)
    {
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        default:
        printf("invalid choice");
}
printf("do you want to continue");
scanf("%d",&count);
}
while(count==1);
}