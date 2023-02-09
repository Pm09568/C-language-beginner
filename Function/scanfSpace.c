#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    printf("enter string");
    scanf("%[^\n]",ch);
    printf(" %s",ch);
    return 0;
}