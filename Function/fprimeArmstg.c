#include<stdio.h>
#include<math.h>

void number();
void kiet();

int main(){
     int n;
    printf("\n find Prime or Not Prime  for enter 1  and  ");
    printf("\n find Armstrong number for enter 2 =  ");
    scanf("%d",&n);
    switch (n)
    {
    case 1: number();
        break;
    case 2: ; kiet();
        break;
    
    default:printf("Not valid");
        break;
    }
//  number();
//  kiet();
    return 0;
}

void number()
{
    int n,i,j=0;
    printf("\nenter number ");
    scanf("%d",&n);
   for ( i = 1; i <=n; i++)
   {
    if(n%i==0){
        if(n%i==0){
    j++;
   }
   }
   }
    if(j==2){
        printf("Prime Number\n");
    }
    else{
        printf("Not Prime number \n");
    }

}
void kiet()
{
    int n ,a,r,arm=0;
    printf("\nenter number :");
    scanf("%d",&n);

    a=n;
    while(n>0)
    {
       r= n%10;
       arm=(r*r*r)+arm ;
         n=n/10;

    }
    if(a== arm){
    printf("\nArmstorng number :");
}
else{
    printf("Not Armstorng no :\n");
}
}