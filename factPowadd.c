#include<stdio.h>
#include<math.h>


void factorial(); 
 void power();
 void addition();

int main(){
    int n;
    printf("enter choice (1,2,3) to  go to funtion  :");
    scanf("%d",&n);

    switch (n)
    {
    case 1:factorial() ;
        break;
    case 2: power();
        break;
    case 3:addition();
    break;
    default:
    printf("not valid");
        break;
    }
    //  factorial();
    //  power();
    //  addition();
    return 0;

} 
void factorial(){
    int n,i,fact=1;
    printf("\nenter number whose find the factorial :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
       printf("%d\n",fact);
}
void power(){
   int a ,b,result;
    printf("\nenter value  to find power  :");
    scanf("%d",&a);
    printf("enter  power :");
    scanf("%d",&b);

    result= pow(a,b);

    printf("%d\n",result);
}
void addition()
{
    int i,n,sum=0;
    printf("\nenter number  to find sum :");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)

 {
    sum+=i%10;
    }
     printf("%d\n",sum);  
    
}