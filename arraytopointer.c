#include<stdio.h>
void main(){

int *arr[4];
int a=20,b=45,c=67,d=78;
arr[0]=&a;
arr[1]=&b;
arr[2]=&c;
arr[3]=&d;
printf("Value of Array of Pointer are\n");
for(int i=0;i<4;i++)
{
printf("%d ",*(arr[i]));
}
 }