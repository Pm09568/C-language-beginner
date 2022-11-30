#include <stdio.h>

int main() {
   int i, j,n;
   printf("enter n :");
   scanf("%d",&n);
   if(n<1 || n>10){
       printf(" \n");
       return 0;
   }
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           if(i==0 || i==n-1)
           printf("#");
       else if(j==0 || j==n-1)
         printf("#");
         else 
         printf(" ");
   }
       printf("\n");
   
}
    return 0;
}