#include<stdio.h>
int display(int n);
int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);
display(n);
if(display(n)){
    printf("even");
}
else{
    printf("odd");
}
    return 0;
}
int display(int n){
if(n%2==0)
return 1;
else

return 0;


}