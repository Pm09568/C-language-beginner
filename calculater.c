#include"stdio.h"
int main()
{
 int a,b;
 printf("Enter  two number :");
 scanf("%d%d",&a,&b);
 fflush(stdin);
 char ch;
 printf("select operator (+,-,*,/)= ");
 scanf("%c",&ch);
 
 if (ch=='+')
 {

    printf("%d",a+b);
 }
 else if(ch=='-')
 {
    printf("%d",a-b); 
 }
 else if(ch=='*')
 {
    printf("%d",a*b); 
 }
 else if(ch=='/')
 {
    printf("%d",a/b); 
 }
 else
 {
    printf("not valid"); 
 }
    


    return 0;
}
