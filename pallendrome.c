#include<stdio.h>
#include<string.h>
int main(){
    char str[10]="ooccoo";
    int length = strlen(str) - 1;
    int flag = 0;
     for(int i=0; str[i] !='\0'; i++)
    {
        if(str[i] != str[length])
        {
        flag = 1;
        }
        length--;
    }
    if(flag == 1){
        printf("it's not palindrome");
    }
    else{
        printf("palindrome");
    }
}