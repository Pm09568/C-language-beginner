#include<stdio.h>
void strcopy(char *,char *);
int main(){
    char data[30];
    char copydata[30];
    printf("enter string");
    scanf("%[^\n]",data);
    // printf("enter string");
    // scanf("%[^\n]",copydata);
    strcopy(copydata,data);
   printf("copy  %s",copydata);
    return 0;
}
;
void strcopy(char *destination,char*source){
    while(*source !='\0'){
        *destination=*source;
        source++;
        destination++;

    }
    *destination ='\0';
   // printf("enter string %s",*destination);
}