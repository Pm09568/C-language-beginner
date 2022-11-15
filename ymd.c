#include<stdio.h>
int main(){
    //to calculate years: months: days;

    int n,years ,month, days;
    printf("enter second:");
    scanf("%d",&n);
     years=n/365;
    month=(n%365)/30;
    days=n-(years*365+month*30);
    printf(" %d\n ",years);
     printf(" %d \n",month);
      printf(" %d \n",days);
      
      return 0;
}
     