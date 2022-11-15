#include<stdio.h>
//Enter days to calculate how many year ,weeks and day in givin number 
int main(){
    int n,year,week,days;
    printf("enter a days");
    scanf("%d",&n);
    
year=n/365;
week=(n%365)/7;
days=n-(year*365+week*7);
    printf("week is :%d\n",year);
    printf("Year is :%d\n",week);
    printf("days is :%d\n",days);
    return 0;
    
}