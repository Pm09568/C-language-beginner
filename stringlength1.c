#include<stdio.h>
int strlength(char data[]);
int main(){
    char data[30];
    printf("enter string ");
    scanf("%[^\n]",data);

   int len= strlength(data);
    printf("length of string %d",len);
    return 0;

}
int strlength(char data[]){
   int len=0,i=0;
   while(data[i] !='\0'){
    len++; 
    data++;
   }
   return len;
}