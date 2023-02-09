#include"stdio.h"
void hexa(int n);
int main(){
    int n ;
    printf("enter number" );
    scanf("%d",&n);
    hexa(n);
    return 0;
}
void hexa(int n){
    printf(" hexa decimal value is =%x",n);
    
}