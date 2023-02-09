#include<stdio.h>
int main(){
    int i ,n, a=0,b=1,c=0;
printf("enter number ");
scanf("%d",&n);
//printf("Fabunacci series is = %d %d",a,b);

for(i=1;i<=n;i++){
   // if(c>=n)
  //  {
    //    break;
    //}
printf(" %d",c);
 a=b;
 b=c;
 c=a+b;
}
return 0;
}