#include <stdio.h>

int main() {
    float SI;
  float intrest,principal,rate ,time;
   printf("enter principlal :");
   scanf("%f",&principal);
   printf("enter rate :" );
   scanf("%f",&rate);
    printf("enter time :");
   scanf("%f",&time);
 SI=(principal*rate*time)/100;
   printf("%f",SI);
    return 0;
}