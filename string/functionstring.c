#include<stdio.h>
void display(char str[] );
void main(){
    char str[20];
    printf("enter string ");
    scanf("%[^\n]",str);
    display(str);
}
void display(char str[]){
    printf("%s",str);
}