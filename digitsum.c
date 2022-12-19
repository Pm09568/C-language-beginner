#include<stdio.h>
Void main()
{
    int n ,m,sum=0;
    printf("enter digit :");
    scanf("%d",&n);

    while(n>0)
    {
        m=n%10;
        sum+=m;
        n=n/10;
    }
    printf("Digit sum =%d",sum);
}
