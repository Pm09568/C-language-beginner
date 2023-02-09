#include<stdio.h>
int  display(int a[]);
int main(){
    int i,a[10]; 
    printf("enter arrey:");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
   int max= display(a);
     printf(" max value is= %d",max);

  return 0;
}
int display(int a[]){
    int i,max=0;
    max=a[0];
    for(i=1;i<9;i++){
    if(max<a[i])
        max=a[i];
    
    } 
    return max;
   //  printf(" max value is= %d",max);
    
}