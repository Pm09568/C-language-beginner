
#include<stdio.h>
void display(int ,int, int ,int);
int main(){
    int a,b,c,d;
    printf("enter matrix size of a :");
    scanf("%d %d",&a,&b);
    printf("\nenter matrix size of b :");
    scanf("%d %d",&c,&d);
    printf("\narray size a =  %d by %d\n",a,b);
    printf("\narray size b = %d by %d\n",c,d);
    printf("enter matrix A :");
    display(a,b,c,d);
    return 0;
} 
int i,j;
void display(int a ,int b ,int c,int d){
    int A[a][b];
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("enter matrix B :");
    int B[c][d];
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            scanf("%d",&B[i][j]);
        }
    }
    int sum=0;
     int C[a][d];
    for(i=0;i<a;i++){
        for(j=0;j<d;j++){
         for (int k = 0; k< c; k++)
         {
             sum+=A[i][k]*B[k][j];
         }
         C[i][j]=sum;
         sum=0;
        }
    }

    for(i=0;i<a;i++){
        for(j=0;j<d;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    } 


