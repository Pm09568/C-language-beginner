#include<stdio.h>
int main(){
int a,b;
 printf("enter two number :");
scanf("%d %d",&a,&b);

char c;
printf("enter a symbol which you want +,-,*,/");
scanf("%c",&c);
int sum,sub,mult,div;
sum=a+b;
sub=a-b;
mult=a*b;
div=a/b;
if(c=='+')
printf("sum is %d");
else if(c=='-')
printf("sub is %d");
else if(c=='*')
printf("mult is %d");
else if(c=='/')
printf("div is %d");
return 0;
}