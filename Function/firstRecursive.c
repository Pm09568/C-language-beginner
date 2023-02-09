#include<stdio.h>
void display(int n);
int main(){
    int n;
    printf("enter number ");
    scanf("%d",&n);
      display(n);
    return 0;
}
void display(int n){
    if (n==0)
    {
        return;
    }else{
        printf("%d ",n);
        display(n-1);
        //printf("%d ",n);
    }
    
}