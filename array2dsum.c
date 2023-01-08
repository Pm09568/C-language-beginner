#include<stdio.h>
int main(){
    int i,j;
    int a[2][2];
    
    printf("enter natrix 1:");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){

          scanf("%d",&a[i][j]);
        }
    }
     int b[2][2];
    printf("enter matrix 2:");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int sum[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        sum[i][j]=a[i][j]+b[i][j];
        }  
    }       
for(i=0;i<2;i++){
     for(j=0;j<2;j++){
        printf("%d ",sum[i][j]);  
     }
     printf("\n"); 
 }
}
