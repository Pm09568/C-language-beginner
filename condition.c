#include<stdio.h>
int main()
{
    int age ,InsAmt = 0, Discount = 0;
    char gender; 
    printf("\nenter gender : ");
    scanf("%c",&gender);
    printf("\nenter age : ");
    scanf("%d",&age);

    if (age>=21 && age<=30)
    {
    //    printf(" amount is 10000");
      InsAmt = 10000; 
    }
    else if(age>=31 && age<=40)
    {
        // printf("amount is 15000");
        InsAmt = 15000;
    }
    else if(age>=41 && age<=50)
    {
    // printf("amount is 20000");
        InsAmt = 20000;
    }
    else if (age>=51 && age<=60)
    {
        // printf("amount is 40000");
        InsAmt = 40000;
    }
    else {
        printf("enter valid age");
    }

    if(gender == 'm')
    {
      Discount += (InsAmt *10 ) / 100;
     printf("The Insurance aMOUNT IS : %d",InsAmt+Discount);
    }
    else
    {
      Discount += (InsAmt *10 ) / 100;
     printf("The Insurance aMOUNT IS : %d",InsAmt-Discount);
    }


    return 0;
}