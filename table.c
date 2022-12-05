#include<stdio.h>
int main()
{
    int i,j,n;
    // printf("enter n");
    // scanf("%d",&n);

    for (i=1;i<=10;i++)
    {
       
        
        for(j=1;j<=10;j++)
        {
        printf("\n %d * %d  : %d",i,j,i*j);
        }
    }
    return 0;
}