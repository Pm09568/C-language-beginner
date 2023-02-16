#include<stdio.h>
#include<string.h>
int strlength(char *);
int main(){
    char data[30];
    printf("enter string ");
    scanf("%[^\n]",data);

   int len= strlength(data);
    printf("length if string =%d",len);
    return 0;
}
int strlength(char *data)
{
    int len=0;
    while(*(data) !='\0'){
        data++; 
        len++;
    }
   return len;
}