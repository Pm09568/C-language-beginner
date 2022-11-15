#include<stdio.h>
// Enter some second to to calculate hours :minutes: second
int main(){
    int n,H,M,S;
    printf("enter second:");
    scanf("%d",&n);
     H=n/3600;
    M=(n%3600)/60;
    S=n-(H*3600+M*60);
    printf("H:M:S = %d : %d : %d",H,M,S);
}
     