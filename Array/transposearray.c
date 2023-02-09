#include<stdio.h>
int main(){
    int arr[2][3],i,j;
    printf("enter 2d array:");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}

printf("Aftre transpose matrix\n");
int a[3][2];
for(i=0;i<3;i++){
    for(j=0;j<2;j++){
        a[i][j]=arr[j][i];
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
}