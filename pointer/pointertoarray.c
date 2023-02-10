#include<stdio.h>

int main()
{
int a[4]={2,3,4,5};
int i, *j;
j=a;
 printf("Values of arrays are =\n");
for(i=0;i<4;i++)
{
printf("%d ",*(j+i));
}
}