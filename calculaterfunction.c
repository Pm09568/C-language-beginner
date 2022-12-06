#include"stdio.h"
void calculater();
int  main()
{
    calculater();
    return 0;
}
void calculater()
{
    int a ,b ;
char ch ;

    printf("enter operator (+ , -, * , /) ");
    scanf("%c",&ch);

    printf("enter two number ");
    scanf("%d %d",&a,&b);

    
    switch (ch)
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
        break;
    }
}
