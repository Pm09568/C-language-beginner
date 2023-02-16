#include<stdio.h>
int strcat(char *,char *);
int main(){
    char data[30];
    char copydata[30];
    printf("enter string 1: ");
    scanf("%[^\n]",data);
    printf("enter string 2 :");
    scanf("%[^\n]",copydata);
    strcat(copydata,data);
    printf("%s",copydata);
    return 0;
}
// void strcat(char *destination,char*source){
//     while(*destination !='\0'){
//         destination++;
//     }
//     while(*source !='\0'){

    
//         *destination=*source;
//         destination++;
//         source++;

//     }
//     *destination ='\0';
//}
int strcat(char *destination,char *source){
    char *temp=destination;
    while(*destination !='\0'){
        destination++;
    }
    while(*source !='\0'){
        *destination=*source;
        destination++;
        source++;

    }
    *destination='\0';
    return *temp;
}