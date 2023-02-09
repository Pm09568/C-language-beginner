#include<stdio.h>
void display(int n);
int main()
{
    int n;
    printf("enter number ");
    scanf("%d",&n);


    display(n);
    return 0;
}
void display(int n){
    int i,a=0,b=1,c=0;
    //printf("%d %d",a,b);
    for(i=0;i<=n;i++)
    {
        if(c>=n)
        {
            break;
        }
    printf(" %d",c);
        a=b;
        b=c;
        c=a+b;
    }
}