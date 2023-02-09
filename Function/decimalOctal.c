#include"stdio.h"
void octal(int n);
int main(){
    int n;
    printf("enetr number");
    scanf("%d",&n);
    octal(n);
    return 0;

}
void octal(int n){
    printf(" octal vaue is =%o",n);
}