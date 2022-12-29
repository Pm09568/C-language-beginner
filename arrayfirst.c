#include<stdio.h>
int main(){
    int num[5];//={10,20,30,40,50};
    // printf("%d\n",num[1]);
    // printf("%d\n",&num[1]);
    // printf("%d",*(num+1));
    for(int i=0;i<5;i++){
       // printf("%d ",num[i]);
      // scanf("%d",num+i);
       scanf("%d",&num[i]);
       printf("%d ",num[i]);

    }
    return 0;
}