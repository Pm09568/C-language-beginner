#include<stdio.h>
void main()
{
    int a,b;
    
    char c;
do
{
    printf("enter two number");
    scanf("%d%d",&a,&b);
   fflush(stdin);
    printf("enter the operator + - * / : ");
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

}
while(0);
}