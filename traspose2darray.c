#include<stdio.h>
void main(){
    int a[2][3]={ 1,2,3,4,5,8};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
     }
     printf("\n");
    int b[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            b[i][j]=a[j][i];
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }




}