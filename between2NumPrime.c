#include<stdio.h>
void simple();
int main()
{
    simple();
    return 0;
}
void simple()
{
    int i, count=0, j;
    for(i=1; i<=50; i++)
    {
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
               count++;
               break;
           }
        }
        if(count==0 && i!=1)
            printf("%d\n", i);
        count = 0;
    }
}
