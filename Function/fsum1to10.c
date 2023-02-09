#include<stdio.h>
void display();
int main(){
    
    display();
    return 0;
}
void display(){
int a=0,b=0, sum=0,i;
    for(i=1;i<=10;i++)
 sum =sum +i;
 printf("sum of all no.= %d \n",sum);
    
    for(i=1;i<=10;i++)
    if(i%2==0)
    a=a+i;
    printf("sum of even no.= %d\n",a);
    
    for(i=1;i<=10;i++)
    if(i%2!=0)
    b=b+i;
    printf("sum of odd no.= %d\n",b);
    
}