#include <stdio.h>
int * larger(int *, int *);
void main()
{
 int a = 15;
 int b = 92;

 int *p;
 p = larger(&a, &b);
 printf("%d is larger",*p);
}
int * larger(int *a , int *b)
{
 If (*a > *b){
 return x; 
 }
 else{
 return y;
 }
}