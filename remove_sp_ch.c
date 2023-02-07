#include<stdio.h>
#include<string.h>
void main(){
    char str[100]="prashant@#mishra";
    for(int i=0;str[i]!='\0';i++){
        if((str[i]>=65 && str[i]<=90 )  ||(str[i]>=97 && str[i]<=122) ){
            printf("%c",str[i]);
        }
    }
}