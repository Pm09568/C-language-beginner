#include<stdio.h>
int main(){
    int i,j,a,b;
    
    printf("enter sizeof array 1:");
    scanf("%d %d",&a,&b);
    printf("matrix 1 size= %d by %d\n",a,b);
     int p[a][b];

    printf("enter natrix 1:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {

          scanf("%d",&p[i][j]);
        }
    }
    printf("enter sizeof array 2:");
    scanf("%d %d",&a,&b);
    printf("matrixe 2 size= %d by %d\n",a,b);
     int q[a][b];

    printf("enter matrix 2:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&q[i][j]);
        }
    }
    int sum[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        sum[i][j]=p[i][j]+q[i][j];
        }  
    }       
for(i=0;i<2;i++){
     for(j=0;j<2;j++){
        printf("%d ",sum[i][j]);  
     }
     printf("\n"); 
 }
}
